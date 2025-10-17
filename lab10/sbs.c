#include <stdio.h>
#include <string.h>

struct Book {
    char id[10], name[100], a[100];
};

int main() {
    int n, f = 0;
    char searchID[10];
    scanf("%d %s", &n, searchID);

    struct Book b[n];
    for (int i = 0; i < n; i++)
        scanf("%s %s %s", b[i].id, b[i].name, b[i].a);

    for (int i = 0; i < n; i++)
        if (strcmp(searchID, b[i].id) == 0) {
            printf("%s %s %s", b[i].id, b[i].name, b[i].a);
            f = 1;
            break;
        }

    if (!f) printf("Not Found");
}