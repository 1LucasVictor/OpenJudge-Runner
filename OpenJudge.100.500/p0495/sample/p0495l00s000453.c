#include<stdio.h>

int main(void){

    char S[4];
    int i,ans=1;

    scanf("%s",S);

    if(S[0] == S[1] && S[0] == S[2]) ans = 0;

    if(ans == 0) printf("No\n");
    else printf("Yes\n");
    return 0;
}