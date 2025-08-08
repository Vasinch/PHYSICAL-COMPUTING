#include <stdio.h>

int main()
{
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18}, N[] = {1, 3, 9, 7, 11, 15, 19};
    int n, i;

    do
        scanf("%d", &n);
    while (n < 1 || n > 20);

    for (i = 0; i < 8; i++)
        if (M[i] == n)
            return printf("%d is in M at index [%d]", n, i), 0;
    for (i = 0; i < 7; i++)
        if (N[i] == n)
            return printf("%d is in N at index [%d]", n, i), 0;

    printf("%d is not in neither M nor N", n);
}