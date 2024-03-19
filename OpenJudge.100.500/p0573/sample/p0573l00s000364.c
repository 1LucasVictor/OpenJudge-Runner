#include<stdio.h>
#include<string.h>
int main()
{
    char S[6];
    scanf("%s",S);
    if(S[0]==S[1] || S[1]==S[2] || S[2]==S[3] || S[3]==S[0])
        printf("Yes\n");
    else printf("No\n");
}
