#include <stdio.h>
#include <math.h>

double getans(int o, int u);

int main()
{
    int o, u;
    scanf("%d", &o);
    scanf("%d", &u);
    double ans = getans(o, u);
    printf("theta (degree) : %d\n", o);
    printf("u (m/s) : %d\n", u);
    printf("h (m) : %.4lf", ans);
    return 0;
}

double getans(int o, int u)
{
    double h = (pow(u, 2) * pow(sin((o * M_PI) / 180), 2)) / (2 * 9.81);
    return h;
}