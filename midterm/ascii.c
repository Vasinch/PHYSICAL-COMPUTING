#include <stdio.h>

int main(){
    char n;
    scanf("%c",&n);
    if (n >= 'a' && n <= 'z') n = n - 32,printf("%c",n); //ตัวเล็กไปตัวใหญ่ - 32
    else if (n >= 'A' && n <= 'Z') n = n+32,printf("%c",n); //ตัวใหญ่ไปตัวเล็ก + 32
    else printf("error");
    return 0;
}
