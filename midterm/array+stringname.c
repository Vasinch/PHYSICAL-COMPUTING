#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    char name[30];
    scanf(" %[^\n]",name);
    for (int i =0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for (int j =0;j<n;j++){
        printf("%d ",array[j]);
    }
    printf("\n%s",name);
    return 0;
}