#include <stdio.h>

int main()
{
    char text[301], target;
    int positions[301], count = 0;

    scanf("%[^\n]", text);
    scanf(" %c", &target);

    if (target >= 'A' && target <= 'Z')
        target += 32;

    for (int i = 0; text[i] != '\0'; i++)
    {
        char ch = text[i];
        if (ch >= 'A' && ch <= 'Z')
            ch += 32;

        if (ch == target)
        {
            positions[count] = i + 1;
            count++;
        }
    }

    if (count > 0)
    {
        printf("There is/are %d \"%c\" in the above sentences.\n", count, target);
        printf("Position: ");
        for (int i = 0; i < count; i++)
        {
            printf("%d", positions[i]);
            if (i != count - 1)
                printf(", ");
        }
    }
    else
    {
        printf("Not found.");
    }

    return 0;
}