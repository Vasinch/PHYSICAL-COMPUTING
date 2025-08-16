#include <stdio.h>
#include <math.h>

double grader(double a, double b);

int main()
{
    double a, b;
    scanf("%lf", &a);
    scanf("%lf", &b);
    double ans = grader(a, b);
    printf("sqrt(%.0lf^2+%.0lf^2)=%.2lf", a, b, ans);
    return 0;
}

double grader(double a, double b)
{
    double c = sqrt(pow(a, 2) + pow(b, 2));
    return c;
}
