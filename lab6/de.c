#include <stdio.h>

int main()
{
    char seq[201], text[] = "aiwgzvfuthsojlkdecnmrqpyxb";
    scanf("%[^\n]", seq);

    for (int i = 0; seq[i]; i++)
    {
        if (seq[i] == ' ')
        {
            putchar(' ');
            continue;
        }

        char ch = seq[i];
        int is_upper = (ch >= 'A' && ch <= 'Z');
        char lower = is_upper ? ch + 32 : ch;

        int idx = -1;
        for (int j = 0; j < 26; j++)
        {
            if (text[j] == lower)
            {
                idx = j - 5;
                if (idx < 0)
                    idx += 26;
                break;
            }
        }

        if (idx == -1)
            continue;

        char decoded = text[idx];
        if (is_upper)
            decoded -= 32;

        putchar(decoded);
    }
}