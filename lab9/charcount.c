#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char *str = malloc(100);
    int lowercase = 0, uppercase = 0, digits = 0;
    char *ptr = str;
    char ch;

    while (scanf("%c", &ch) == 1 && ch != '\n') {
        *ptr++ = ch;
        if (islower(ch)) lowercase++;
        if (isupper(ch)) uppercase++;
        if (isdigit(ch)) digits++;
    }
    *ptr = '\0';

    printf("Lowercase letters: %d\n", lowercase);
    printf("Uppercase letters: %d\n", uppercase);
    printf("Digits: %d\n", digits);

    free(str);
    return 0;
}