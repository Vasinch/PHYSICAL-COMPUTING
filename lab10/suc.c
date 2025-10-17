#include <stdio.h>
#include <string.h>

int main() {
    char s[101], t[101];
    scanf("%[^\n]", s);

    while (1) {
        int j = 0, changed = 0;
        for (int i = 0; s[i]; i++) {
            if (s[i] == s[i + 1]) { i++; changed = 1; }
            else t[j++] = s[i];
        }
        t[j] = '\0';
        if (!changed) break;
        printf("%s\n", t);
        strcpy(s, t);
    }
}