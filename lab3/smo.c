#include <stdio.h>

int main()
{
    float a, b, c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    printf("%.2f", (a * c) - (((a * c) * b) / 100));
    return 0;
}