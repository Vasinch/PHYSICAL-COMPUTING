#include <stdio.h>

int main()
{
    char text[100];
    scanf("%[^\n]", text);

    int len = 0;
    while (text[len] != '\0')
        len++;

    for (int i = 0; i < len / 2; i++)
    {
        if (text[i] != text[len - 1 - i])
        {
            printf("It is not Palindrome.");
            return 0;
        }
    }

    printf("It is Palindrome.");
    return 0;
}