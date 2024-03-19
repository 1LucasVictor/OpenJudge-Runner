#include<stdio.h>
int main(){
    char s[4];
    scanf("%s",s);
    if(s[0]!=s[1]||s[1]!=s[2]){
        printf("Yes\n");
        return 0;
    }
    printf("No\n");
    return 0;
}