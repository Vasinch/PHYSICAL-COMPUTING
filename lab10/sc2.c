#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[451];
    char **l = malloc(10 * sizeof(char*));
    int n = 0, c = 10;

    while (1) {
        scanf(" %[^\n]", s);
        if (s[0] == '.') break;
        if (n == c) l = realloc(l, (c *= 2) * sizeof(char*));
        l[n] = malloc(strlen(s) + 1);
        strcpy(l[n], s);
        n++;
    }

    int totalWords = 0, totalChars = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; l[i][j]; j++) {
            if (l[i][j] != ' ') totalChars++;
            if (l[i][j] == ' ' || l[i][j + 1] == '\0') totalWords++;
        }
        free(l[i]);
    }

    printf("Char = %d, word = %d, line = %d", totalChars, totalWords, n);
    free(l);
    return 0;
}