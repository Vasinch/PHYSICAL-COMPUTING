#include <stdio.h>

int main()
{
    float a;
    int b, c;
    scanf("%f", &a);
    scanf("%d %d", &b, &c);

    float dis = (a * c) - (((a * c) * b) / 100);
    float free = (((c / 3) + (c / 3)) * a) + ((c % 3) * a);

    if (dis <= free)
    {
        printf("Discount %d%% \n", b);
        printf("%.2f", dis);
    }
    else
    {
        printf("Buy 2 Get 1 \n");
        printf("%.2f", free);
    }
    return 0;
}