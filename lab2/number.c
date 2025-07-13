#include <stdio.h>

int main()
{
    int x, y = 0;
    scanf("%d", &x);
start:
    if (x >= 1000)
    {
        x = x - 1000;
        y = y + 1;
        goto start;
    }
    printf("%03d%02d", x, y);
    return 0;
}