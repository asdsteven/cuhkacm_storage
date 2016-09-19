#include <stdio.h>

int main()
{
    int n; 
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        if (a==b) printf("=");
        a > b ? printf(">") : printf("<");
    }
    return 0;
}

