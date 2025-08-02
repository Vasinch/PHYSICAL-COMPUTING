#include <stdio.h>

int main()
{
    float bank, money;
    int n = 0;
    scanf("%f %f", &bank, &money);
    while (1)
    {
        char x;
        float m;
        scanf("%c %f", &x, &m);
        if (x == 'E' || n == 3)
        {
            break;
        }
        if (x == 'D')
        {
            if (money >= m)
            {
                bank += m;
                money -= m;
                n = 0;
            }
            else
            {
                ++n;
            }
        }
        if (x == 'W')
        {
            if (bank >= m)
            {
                bank -= m;
                money += m;
                n = 0;
            }
            else
            {
                ++n;
            }
        }
    }
    printf("%.2f\n%.2f\n", bank, money);
    return 0;
}