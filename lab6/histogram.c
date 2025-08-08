#include <stdio.h>

int main()
{
    int n, counts[26] = {0}, appeared[26] = {0}, order_count = 0;
    char order[26];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char ch;
        scanf(" %c", &ch);
        if (ch >= 'A' && ch <= 'Z')
            ch += 32;
        if (ch >= 'a' && ch <= 'z')
        {
            int idx = ch - 'a';
            counts[idx]++;
            if (!appeared[idx])
            {
                order[order_count++] = ch;
                appeared[idx] = 1;
            }
        }
    }

    for (int i = 0; i < order_count; i++)
    {
        printf("%c: %d\n", order[i], counts[order[i] - 'a']);
    }

    return 0;
}