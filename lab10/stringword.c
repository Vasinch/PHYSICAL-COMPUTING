#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char t[150], w[50][150];
    int c = 0;
    scanf("%[^\n]", t);

    char *k = strtok(t, " ");
    while (k != NULL) {
        strcpy(w[c], k);
        for (int i = 0; w[c][i]; i++)
            w[c][i] = tolower(w[c][i]);
        c++;
        k = strtok(NULL, " ");
    }

    printf("%d words\n----\n", c);
    for (int i = 0; i < c; i++)
        printf("%s : %lu\n", w[i], strlen(w[i]));

    return 0;
}