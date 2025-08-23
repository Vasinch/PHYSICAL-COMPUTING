#include <stdio.h>

int main(){
    //integers
    int a; //4 bytes
    long b; //4 bytes (Windows 64-bit), 8 bytes (Linux 64-bit)
    long long c; //8 bytes (ทุกระบบสมัยใหม่)
    scanf("%d", &a); // อย่าลืม &
    scanf("%ld", &b);// อย่าลืม &
    scanf("%lld", &c);// อย่าลืม &
    printf("%d %ld %lld\n", a, b, c);

    //float
    float x; //4 bytes
    double y; //8 bytes
    long double z; //10, 12 หรือ 16 bytes (แล้วแต่ compiler)
    scanf("%f", &x);// อย่าลืม &
    scanf("%lf", &y);// อย่าลืม &
    scanf("%Lf", &z);// อย่าลืม & Lตัวใหญ่
    printf("%f %lf %Lf\n", x, y, z);

    //char
    char ch;
    scanf(" %c", &ch); // space ด้วยก่อน %c  อย่าลืม &
    printf("%c\n", ch);

    //string
    char str[50];
    scanf("%s", str);
    printf("%s\n", str);

    //string มี space
    char name[50];
    scanf(" %[^\n]",name); // space ด้วยก่อน %[^\n]
    printf("%s",name);

    //array1d
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // array2d
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}