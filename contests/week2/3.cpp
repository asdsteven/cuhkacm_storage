#include <cstdio>
#include <queue>
using namespace std;

int main() {
    int N;
    while (scanf("%d", &N), N) {
	priority_queue<int> q;
	for (int i = 0; i < N; i++) {
	    int x;
	    scanf("%d", &x);
	    q.push(-x);
	}
	int ans = 0;
	while (q.size() > 1) {
	    int x = q.top();
	    q.pop();
	    x += q.top();
	    q.pop();
	    ans -= x;
	    q.push(x);
	}
	printf("%d\n", ans);
    }
}
