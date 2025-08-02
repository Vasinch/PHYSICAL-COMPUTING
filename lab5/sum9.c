#include <stdio.h>

int main()
{
    int n, m;
    m = 0;
    do
    {
        scanf("%d", &n);
        if (n != -9)
        {
            m += n;
        }
        if (n == 9)
        {
            break;
        }
    } while (n != -9);
    printf("%d", m);
    return 0;
}