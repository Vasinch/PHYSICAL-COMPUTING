#include <stdio.h>
#include <math.h>
int main()
{
    int x, d, h, m, s;
    scanf("%d", &x);
    d = x / 86400;
    h = (x / 3600) % 24;
    m = (x / 60) % 60;
    s = x % 60;
    printf("%d s = %d d %d h %d m %d s", x, d, h, m, s);
    return 0;
}