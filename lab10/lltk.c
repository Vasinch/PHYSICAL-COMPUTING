#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int *p = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", p + i);

    int left = 0, right = n - 1, mode = 0;

    for (int i = 0; i < n; i++) {
        int val = (mode == 0 || mode > 2) ? *(p + right--) : *(p + left++);
        printf("%d", val);
        if (i < n - 1) printf(" -> ");
        mode = (mode + 1) % 5;
        if (mode == 0) mode = 1;
    }

    free(p);
    return 0;
}