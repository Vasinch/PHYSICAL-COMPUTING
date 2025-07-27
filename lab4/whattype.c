#include <stdio.h>
#include <ctype.h>

int main()
{
    char x;
    scanf("%c", &x);
    if (isdigit(x))
    {
        printf("number");
    }
    else if (isalpha(x))
    {
        if (islower(x))
        {
            printf("lowercase");
        }
        else if (isupper(x))
        {
            printf("uppercase");
        }
    }
    else
    {
        printf("error");
    }
    return 0;
}