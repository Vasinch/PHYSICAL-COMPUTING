#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = malloc(100);
    char *ptr = str;
    char c;
    int size = 0;

    while ((c = getchar()) != '\n' && c != EOF) {
        *(ptr + size) = c;
        size++;
    }

    for (int i = size - 1; i >= 0; i--)
        putchar(*(ptr + i));

    free(str);
    return 0;
}