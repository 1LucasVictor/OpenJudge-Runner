#include<stdio.h>
int main(){
    char s[11], t[11];
    scanf("%s%s",s,t);
    int ans = 0;
    int i;
    for(i = 0; s[i]; i++)
        if(s[i] == t[i])
            ans ++;
    if(i == ans){
        printf("Yes");
    }
    else{
        printf("No");
    }
    printf("\n");
    return 0;
}