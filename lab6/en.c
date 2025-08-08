#include <stdio.h>

int main()
{
    char input[201];
    char cipher[] = "aiwgzvfuthsojlkdecnmrqpyxb";
    scanf("%[^\n]", input);

    for (int i = 0; input[i]; i++)
    {
        char ch = input[i];
        if (ch == ' ')
        {
            putchar(' ');
            continue;
        }

        int is_upper = (ch >= 'A' && ch <= 'Z');
        char lower = is_upper ? ch + 32 : ch;

        int idx = -1;
        for (int j = 0; j < 26; j++)
        {
            if (cipher[j] == lower)
            {
                idx = (j + 5) % 26;
                break;
            }
        }
        if (idx == -1)
            continue;

        char encoded = cipher[idx];
        if (is_upper)
            encoded -= 32;

        putchar(encoded);
    }
}