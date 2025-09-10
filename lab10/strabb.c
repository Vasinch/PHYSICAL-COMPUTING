#include <stdio.h>
#include <ctype.h>
 
int main(){
    char w[200];
    scanf(" %[^\n]",w);
    for(int i = 0;w[i] != '\0';i++)if (isupper(w[i]))printf("%c.",w[i]);
    return 0;
}