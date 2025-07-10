#include <stdio.h>

int main()
{
    char fn[30], ln[30], p2[30], p22[30], p3[30], p33[30];

    scanf("%s", fn);
    scanf("%s", ln);
    scanf("%s", p2);
    scanf("%s", p22);
    scanf("%s", p3);
    scanf("%s", p33);

    printf("Person 1: %s %s\n", fn, ln);
    printf("Person 2: %s %s\n", p2, p22);
    printf("Person 3: %s %s", p3, p33);
    return 0;
}