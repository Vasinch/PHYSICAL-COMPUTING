#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    printf("%03d%02d", x % 1000, x / 1000);
    return 0;
}