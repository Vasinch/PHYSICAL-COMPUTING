#include <stdio.h>
int main()
{
    double x, y;
    scanf("%lf,%lf", &x, &y);
    printf("The sum of the given numbers : %.6lf\n", x + y);
    printf("The difference of the given numbers : %.6lf\n", x - y);
    printf("The product of the given numbers : %.6lf\n", x * y);
    printf("The quotient of the given numbers : %.6lf", x / y);
    return 0;
}