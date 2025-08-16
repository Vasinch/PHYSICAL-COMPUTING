#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void formatName(char *str)
{
    int newWord = 1;
    for (int i = 0; str[i]; i++)
    {
        if (isspace(str[i]))
        {
            newWord = 1;
        }
        else
        {
            str[i] = newWord ? toupper(str[i]) : tolower(str[i]);
            newWord = 0;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    getchar();

    char **names = malloc(n * sizeof(char *));
    if (!names)
        return 1;

    for (int i = 0; i < n; i++)
    {
        names[i] = NULL;
        size_t len = 0;
        ssize_t read = getline(&names[i], &len, stdin);
        if (read > 0 && names[i][read - 1] == '\n')
            names[i][read - 1] = '\0';
        formatName(names[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(names[j], names[min_idx]) < 0)
            {
                min_idx = j;
            }
        }
        if (min_idx != i)
        {
            char *temp = names[i];
            names[i] = names[min_idx];
            names[min_idx] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
        free(names[i]);
    }
    free(names);

    return 0;
}