#include <stdio.h>
#include <math.h>
int main()
{
    float x, y;
    scanf("%f", &x);
    scanf("%f", &y);
    printf("%.2f", sqrt((pow(x, 2)) + (pow(y, 2))));
    return 0;
}