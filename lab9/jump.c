#include <stdio.h>
#include <stdlib.h>

int main() {
    int len, f;
    scanf("%d %d", &len, &f);

    char *str = malloc(len + 1);
    char *ptr = str;

    scanf(" %[^\n]", str);

    while (ptr < str + len && *ptr != '\0') {
        putchar(*ptr);
        ptr += f;
    }

    free(str);
    return 0;
}