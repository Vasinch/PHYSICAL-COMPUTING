#include <stdio.h>

int main()
{
    double km;
    scanf("%lf", &km);
    if (km >= 0 && km <= 5.032)
    {
        printf("Bangkok");
    }
    else if (km > 5.032 && km <= 35.477)
    {
        printf("Samut Prakarn");
    }
    else if (km > 35.477 && km <= 52.9)
    {
        printf("Chachoengsao");
    }
    else if (km > 52.9 && km <= 58.855)
    {
        printf("Chon Buri");
    }
    else
    {
        printf("InValid");
    }
    return 0;
}