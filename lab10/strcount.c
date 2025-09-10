#include <stdio.h>

int main(){
    char c,w[150];
    int ans = 0;
    scanf(" %c %[^\n]",&c,w);
    for(int i = 0;w[i] != '\0';i++)if (w[i] == c || w[i] == c-32 || w[i] == c+32)ans++;
    printf("%d",ans);
    return 0;
}