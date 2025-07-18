#include <stdio.h>
#include <math.h>
int main()
{
    float p, d, h;
    scanf("%f", &p);
    scanf("%f", &d);
    scanf("%f", &h);
    printf("Volume : %.2fml\n", (pow(d / 2, 2)) * (h * M_PI));
    printf("Baht/ml : %.4f", p / ((pow(d / 2, 2)) * (h * M_PI)));
    return 0;
}