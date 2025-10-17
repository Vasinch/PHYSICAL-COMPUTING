#include <stdio.h>
#include <string.h>

typedef struct {
    char id[10];
    char name[100];
    long salary;
    long sales;
} Record;

int main() {
    int n, found = 0;
    char searchID[10];
    scanf("%d", &n);

    Record emp[n];
    for (int i = 0; i < n; i++)
        scanf("%s %s %ld %ld", emp[i].id, emp[i].name, &emp[i].salary, &emp[i].sales);

    scanf("%s", searchID);

    for (int i = 0; i < n; i++) {
        if (strcmp(searchID, emp[i].id) == 0) {
            double com = emp[i].sales * 0.02;
            printf("%s\n%s\n%ld\n%.2lf\n%ld\n%.2lf",
                   emp[i].id, emp[i].name, emp[i].sales,
                   com, emp[i].salary, emp[i].salary + com);
            found = 1;
            break;
        }
    }

    if (!found) printf("ID not found !!!");
    return 0;
}