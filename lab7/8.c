#include <stdio.h>
#include <string.h>
#include <ctype.h>

void change(char x[]);
int is_Same(const char x[], const char y[]);

int main()
{
    char x[101], y[101];
    scanf(" %[^\n]", x);
    scanf(" %[^\n]", y);

    change(x);
    change(y);

    printf("*** Results ***\n");
    printf("%s\n", x);
    printf("%s\n", y);
    printf("***************\n");
    printf("Both strings are%sthe same.\n", is_Same(x, y) ? " " : " not ");

    return 0;
}

int is_Same(const char x[], const char y[])
{
    if (strlen(x) != strlen(y))
        return 0;

    for (int i = 0; x[i]; i++)
    {
        if (tolower(x[i]) != tolower(y[i]))
            return 0;
    }
    return 1;
}

void change(char x[])
{
    for (int i = 0; x[i]; i++)
    {
        x[i] = islower(x[i]) ? toupper(x[i]) : tolower(x[i]);
    }
}