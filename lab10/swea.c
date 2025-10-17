#include <stdio.h>
#include <string.h>

typedef struct {
    char outlook[9];
    int tem, hum;
    char w;
} Weather;

int main() {
    int n;
    scanf("%d", &n);
    Weather w[n];

    for (int i = 0; i < n; i++)
        scanf("%s %d %d %c", w[i].outlook, &w[i].tem, &w[i].hum, &w[i].w);

    for (int i = 0; i < n; i++) {
        if (strcmp(w[i].outlook, "overcast") == 0) {
            printf("yes\n");
        } else if (strcmp(w[i].outlook, "rain") == 0) {
            printf(w[i].w == 'F' ? "yes\n" : "no\n");
        } else {
            printf(w[i].hum > 77.5 ? "no\n" : "yes\n");
        }
    }
}