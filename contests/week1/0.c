#include <stdio.h>

int main() {
    long long n, a, b;
    scanf("%d", &n);
    while (n--) {
        scanf("%lld %lld", &a, &b);
        if (a==b) printf("=");
        a > b ? printf(">") : printf("<");
    }
    return 0;
}