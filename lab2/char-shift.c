#include <stdio.h>

int main()
{
    char a, b, c, d, e;

    scanf("%c\n", &a);
    scanf("%c\n", &b);
    scanf("%c\n", &c);
    scanf("%c\n", &d);
    scanf("%c", &e);

    printf("%c\n", a + 1);
    printf("%c\n", b);
    printf("%c\n", c + 1);
    printf("%c\n", d);
    printf("%c", e + 1);
    return 0;
}