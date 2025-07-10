#include <stdio.h>

int main()
{
    char x[5];
    scanf("%s", x);

    printf("%-81.1s", x);
    printf("%-81.2s", x);
    printf("%-81.3s", x);
    printf("%-81.4s", x);
    printf("%-81.5s", x);
    return 0;
}