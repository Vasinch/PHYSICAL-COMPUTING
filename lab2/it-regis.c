#include <stdio.h>

int main()
{
    char fn[30], ln[30], id[8];
    int d, m, y;
    float gpa;

    scanf("%s", fn);
    scanf("%s", ln);
    scanf("%s", id);
    scanf("%d/%d/%d", &d, &m, &y);
    scanf("%f", &gpa);

    printf("Fullname: %s %s\n", fn, ln);
    printf("ID: %s\n", id);
    printf("DOB: %02d-%02d-%04d\n", d, m, y);
    printf("GPA: %.2f", gpa);
    return 0;
}