#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i =0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int find;
    int count = 0;
    scanf("%d",&find);
    for(int i = 0;i<n;i++){
        if(array[i]==find)count++;
    }
    printf("%d",count);
    return 0;
}