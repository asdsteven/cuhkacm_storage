#include <cstdio>
#include <map>
#include <utility>
using namespace std;

int main() {
    int n, m;
    while (scanf("%d%d", &n, &m) == 2) {
	map<int, int> q;
	map<pair<int, int>, int> r;
	for (int i = 1; i <= n; i++) {
	    int x;
	    scanf("%d", &x);
	    q[x]++;
	    r[make_pair(q[x], x)] = i;
	}
	for (int i = 1; i <= m; i++) {
	    int k, v;
	    scanf("%d%d", &k, &v);
	    printf("%d\n", r[make_pair(k, v)]);
	}
    }
}
