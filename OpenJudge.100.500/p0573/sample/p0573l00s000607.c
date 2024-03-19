#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    char S[5];
    int i,j=0;
    scanf("%s",S);
    if(S[1]!=S[0])j++;
    if(S[2]!=S[0]&&S[2]!=S[1])j++;
    if(S[3]!=S[0]&&S[3]!=S[1]&&S[3]!=S[2])j++;

//printf("%d",j);

    if(j==1)printf("Yes");
    else printf("No");
    return 0;
}