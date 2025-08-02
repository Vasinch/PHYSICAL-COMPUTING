#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int spaces = n - i - 1;
        int stars = i * 2 + 1;

        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < stars; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}