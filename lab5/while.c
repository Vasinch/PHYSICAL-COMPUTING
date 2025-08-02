#include <stdio.h>

int main()
{
    int x, n;
    scanf("%d", &x);
    n = 1;
    while (n <= x)
    {
        printf("%d ", n);
        n += 1;
    }
    return 0;
}