#include <stdio.h>

int main()
{
    char s, drvl;
    float w, cc, alinb;
    int alinc, sleep, can;
    scanf(" %c", &s);
    scanf(" %f", &w);
    scanf(" %c", &drvl);
    scanf(" %f", &cc);
    scanf(" %d", &alinc);
    scanf(" %d", &can);
    scanf(" %d", &sleep);

    float drink = ((alinc / 100.0) * cc) * can;

    float r = (s == 'M') ? 0.68 : 0.55;
    alinb = (drink / (w * r * 10.0)) * 1000.0 - (sleep * 15.0);

    if (alinb <= 50.0 && drvl == 'Y')
    {
        printf("Safe");
    }
    else
    {
        printf("Not Safe");
    }

    return 0;
}