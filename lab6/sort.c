#include <stdio.h>

int cmp(char fname[61], char sname[61])
{
    int i = 0;
    while (fname[i] != '\0' && sname[i] != '\0')
    {
        if (fname[i] < sname[i])
            return 1;
        if (fname[i] > sname[i])
            return 0;
        i++;
    }
    return fname[i] == '\0' && sname[i] != '\0';
}

void swap(char a[61], char b[61])
{
    char n[61];
    for (int i = 0; i < 61; i++)
    {
        n[i] = a[i];
        a[i] = b[i];
        b[i] = n[i];
    }
}

int main()
{
    char name[20][61];

    for (int i = 0; i < 20; i++)
    {
        scanf(" %[^\n]", name[i]);
        for (int j = 0; name[i][j] != '\0'; j++)
        {
            if (name[i][j] >= 'A' && name[i][j] <= 'Z')
            {
                name[i][j] += 32;
            }
        }
    }

    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 19 - i; j++)
        {
            if (!cmp(name[j], name[j + 1]))
            {
                swap(name[j], name[j + 1]);
            }
        }
    }

    for (int i = 0; i < 20; i++)
    {
        int capitalize = 1;
        for (int j = 0; name[i][j] != '\0'; j++)
        {
            if (capitalize && name[i][j] >= 'a' && name[i][j] <= 'z')
            {
                printf("%c", name[i][j] - 32);
                capitalize = 0;
            }
            else
            {
                printf("%c", name[i][j]);
                capitalize = (name[i][j] == ' ');
            }
        }
        printf("\n");
    }

    return 0;
}