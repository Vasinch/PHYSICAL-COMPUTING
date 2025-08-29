#include <stdio.h>
#include <ctype.h>   // ใช้ฟังก์ชัน islower, isupper, isdigit

int main() {
    char strarray[1000];
    scanf("%[^\n]", strarray);

    int lower = 0, upper = 0, digit = 0;

    for (int i = 0; strarray[i] != '\0'; i++) {
        if (islower(strarray[i])) {
            lower++;
        } else if (isupper(strarray[i])) {
            upper++;
        } else if (isdigit(strarray[i])) {
            digit++;
        }
    }

    printf("Lowercase: %d\n", lower);
    printf("Uppercase: %d\n", upper);
    printf("Digits: %d\n", digit);

    return 0;
}