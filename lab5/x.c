#include <stdio.h>

int main()
{
    int rows;
    scanf("%d", &rows);

    for (int i = 0; i <= rows / 2; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf(j == i || j == rows - i - 1 ? "-" : "#");
        }
        printf("\n");
    }

    for (int i = rows / 2 - 1; i >= 0; i--)
    {
        for (int j = 0; j < rows; j++)
        {
            printf(j == i || j == rows - i - 1 ? "-" : "#");
        }
        printf("\n");
    }

    return 0;
}