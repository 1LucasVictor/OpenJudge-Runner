#include<stdio.h>
#include<string.h>
int main()
{
    char S[6];
    scanf("%s",S);
    if(S[0]!=S[1] && S[2]!=S[1])
        printf("No\n");
    else printf("Yes\n");
}
