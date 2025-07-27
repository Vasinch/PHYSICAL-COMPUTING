#include <stdio.h>

int main()
{
    float a, b, c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    float m = 0;
    float s = 0;
    m = a;
    if (b > m)
    {
        m = b;
    }
    if (c > m)
    {
        m = c;
    }
    s = a;
    if (b < s)
    {
        s = b;
    }
    if (c < s)
    {
        s = c;
    }
    float ans = (a + b + c) - (m + s);
    printf("%.2f", ans);
    return 0;
}