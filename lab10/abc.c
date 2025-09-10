#include <stdio.h>
#include <string.h>
 
int main(){
    char a[200],temp;
    scanf("%[^\n]",a);
    int n = strlen(a);
    for(int i=0;i < n-1;i++){
        for(int j= i+1;j<n;j++){
            if((int)a[i] > (int)a[j]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    printf("%s",a);
 
    return 0;
}