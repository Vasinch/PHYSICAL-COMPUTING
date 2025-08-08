#include <stdio.h>

int main()
{
    double M[3][3], N[3][3], R[3][3];
    int i, j, k;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%lf", &M[i][j]);

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%lf", &N[i][j]);

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            R[i][j] = 0;
            for (k = 0; k < 3; k++)
                R[i][j] += M[i][k] * N[k][j];
        }
    }

    printf("A x B\n");
    for (i = 0; i < 3; i++)
        printf("%.2lf %.2lf %.2lf\n", R[i][0], R[i][1], R[i][2]);

    return 0;
}