#include <stdio.h>
#include <math.h>
int main()
{
    float h, w;
    scanf("%f", &h);
    scanf("%f", &w);
    float hm = pow(h / 100, 2);
    printf("%f", w / hm);
    return 0;
}