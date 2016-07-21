#include <cstdio>
#include <cstring>

char s[100001], q[200001];

int main() {
    while (scanf("%s", s) == 1) {
	int h = 100000, t = 100000;
	int si = strlen(s);
	for (int i = 0; i < si; i++) {
	    if (s[i] == '[') {
		int j = ++i;
		while (i < si && s[i] != '[' && s[i] != ']')
		    i++;
		h -= i - j;
		memcpy(q + h, s + j, i - j);
		i--;
	    } else if (s[i] != ']') {
		q[t++] = s[i];
	    }
	}
	q[t] = 0;
	puts(q + h);
    }
}
