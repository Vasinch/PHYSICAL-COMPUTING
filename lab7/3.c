#include <stdio.h>
#include <math.h>

double getper(double a, double b, double cc);
double getarea(double a, double b);

int main()
{
    double a, b, c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    c = pow(a, 2) + pow(b, 2);
    double cc = sqrt(c);
    double ans1 = getper(a, b, cc);
    double ans2 = getarea(a, b);
    printf("Perimeter: %.2lf \n", ans1);
    printf("Area: %.2lf", ans2);
    return 0;
}

double getper(double a, double b, double cc)
{
    return a + b + cc;
}

double getarea(double a, double b)
{
    return (a * b) / 2;
}