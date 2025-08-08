#include <stdio.h>

int main()
{
    char text[101];
    int len = 0;

    scanf("%[^\n]", text);
    while (text[len] != '\0')
        len++;
    for (int i = len - 1; i >= 0; i--)
        printf("%c", text[i]);

    return 0;
}