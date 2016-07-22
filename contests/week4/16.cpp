package main

import (
	"bytes"
	"encoding/json"
	"errors"
	"fmt"
	"github.com/PuerkitoBio/goquery"
	"io/ioutil"
	"mime/multipart"
	"net/http"
	"net/url"
	"strconv"
	"strings"
)

func uvaLogin() error {
	const username = "cuhkacm"
	const passwd = "cuhkacm"
	const uva = "https://uva.onlinejudge.org"
	const s1 = "form#mod_loginform"
	const s2 = "form#mod_loginform input"
	doc, err := goquery.NewDocument(uva)
	if err != nil {
		return err
	}
	action, exists := doc.Find(s1).Attr("action")
	if !exists {
		return errors.New("no action")
	}
	values := url.Values{
		"username": {username},
		"passwd":   {passwd},
	}
	doc.Find(s2).Each(func(i int, s *goquery.Selection) {
		name, a := s.Attr("name")
		value, b := s.Attr("value")
		if a && b {
			values[name] = []string{value}
		}
	})
	res, err := http.PostForm(action, values)
	if err != nil {
		return err
	}
	if err := res.Body.Close(); err != nil {
		return err
	}
	return nil
}

func uvaSubmit(problem, language, solution string) (int, error) {
	const action = "https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=25&page=save_submission"
	f := map[string]string{
		"c":     "1",
		"c++":   "3",
		"c++11": "5",
		"java":  "2",
	}
	values := map[string]string{
		"problemid": "",
		"category":  "",
		"localid":   problem,
		"language":  f[language],
		"code":      solution,
		"codeupl":   "",
	}
	buf := bytes.Buffer{}
	bufw := multipart.NewWriter(&buf)
	for i, v := range values {
		if err := bufw.WriteField(i, v); err != nil {
			return 0, err
		}
	}
	if err := bufw.Close(); err != nil {
		return 0, err
	}
	contentType := bufw.FormDataContentType()
	res, err := http.Post(action, contentType, &buf)
	if err != nil {
		return 0, err
	}
	if err := res.Body.Close(); err != nil {
		return 0, err
	}
	s := strings.Split(res.Header.Get("Location"), "+")
	sid, err := strconv.Atoi(s[len(s)-1])
	if err != nil {
		return 0, err
	}
	return sid, nil
}

func uvaRefresh(minSid int) (map[int]update, error) {
	const uvaHunt = "http://uhunt.felix-halim.net/api/subs-user/850269/"
	res, err := http.Get(fmt.Sprintf("%s%d", uvaHunt, minSid))
	if err != nil {
		return nil, err
	}
	body, err := ioutil.ReadAll(res.Body)
	if err != nil {
		return nil, err
	}
	if err := res.Body.Close(); err != nil {
		return nil, err
	}
	var o struct {
		Name  string
		Uname string
		Subs  [][]int
	}
	if err := json.Unmarshal(body, &o); err != nil {
		return nil, err
	}
	updates := make(map[int]update)
	for _, v := range o.Subs {
		r := v[3]
		updates[v[0]] = update{v[2], &r}
	}
	return updates, nil
}
