#include <stdio.h>
#include <string.h>

void printLine(int w) {
    for(int i = 0; i < w; i++) printf("*");
    printf("\n");
}

void printCenter(int w, char str[]) {
    int space = (w - 2) - strlen(str);
    int left = (space + 1) / 2;
    int right = space - left;

    printf("*");
    for(int i = 0; i < left; i++) printf(" ");
    printf("%s", str);
    for(int i = 0; i < right; i++) printf(" ");
    printf("*\n");
}

int main() {
    int w;
    char a[50], b[40];

    scanf("%d", &w);
    scanf(" %[^\n]", a);
    scanf(" %[^\n]", b);

    printLine(w);
    printCenter(w, a);
    printCenter(w, b);
    printLine(w);

    return 0;
}