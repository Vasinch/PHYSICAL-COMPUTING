#include <stdio.h>
#include <ctype.h>
 
int main(){
    char w[2000];
    int n=0;
    scanf(" %[^\n]",w);
    for(int i = 0;w[i] != '\0';i++){
        if (tolower(w[i]) == 'c' && tolower(w[i+1]) == 'a' && tolower(w[i+2]) == 't'){
        if(n>0)printf(", ");
        n++;
        printf("%d",i);
        }
    }
    return 0;
}