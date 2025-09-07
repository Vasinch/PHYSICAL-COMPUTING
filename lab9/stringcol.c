#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 0, capacity = 10;
    char *str = malloc(capacity);
    char c;

    while (1) {
        scanf(" %c", &c);
        if (c == '-') break;

        if (size >= capacity) {
            capacity *= 2;
            str = realloc(str, capacity);
        }
        *(str + size) = c;
        size++;
    }
    *(str + size) = '\0';

    printf("%s\n", str);

    for (int i = size - 1; i >= 0; i--)
        putchar(*(str + i));

    free(str);
    return 0;
}