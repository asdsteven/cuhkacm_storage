#include <stdio.h>

int main()
{
    int n; 
    scanf("%d", &n);

    int i;
    for (i=0; i<n; i++) {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        if (a==b) printf("=");
        else a > b ? printf(">") : printf("<");
    }
    return 0;
}