#include <stdio.h>

int main(){
    char a[150],b[150];
    int j=0;
    scanf(" %[^\n]",a);
    for(int i=0;a[i] != '\0';i++)if(a[i] != ' ')b[j++] += a[i];
    b[j] = '\0';
    printf("%s",b);
    return 0;
}