#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    if (m > n)
    {
        for (m = m; m >= n; m--)
            printf("%d ", m);
    }
    else if (m < n)
    {
        for (m = m; m <= n; m++)
            printf("%d ", m);
    }
    return 0;
}