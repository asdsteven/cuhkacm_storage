#include <cstdio>
#include <map>
#include <string>
#include <cstring>
using namespace std;

int main() {
    char line[1000];
    map<string, string> m;
    while (gets(line), strcmp(line, "")) {
	char s[11], t[11];
	sscanf(line, "%s%s", s, t);
	m[t] = s;
    }
    while (scanf("%s", line) == 1) {
	if (m.count(line)) {
	    puts(m[line].c_str());
	} else {
	    puts("eh");
	}
    }
}
