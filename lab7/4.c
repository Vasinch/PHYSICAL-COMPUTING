#include <stdio.h>

double ctof(double a);
double ftoc(double a);

int main()
{
    double a;
    char b;
    scanf("%lf", &a);
    scanf("%s", &b);
    if (b == 'F' || b == 'f')
    {
        double ans = ftoc(a);
        printf("%.2lf c", ans);
    }
    else
    {
        double ans = ctof(a);
        printf("%.2lf f", ans);
    }
}

double ftoc(double a)
{
    double f = (a - 32) * 5 / 9;
    return f;
}

double ctof(double a)
{
    double f = 32 + a * (180.0 / 100.0);
    return f;
}