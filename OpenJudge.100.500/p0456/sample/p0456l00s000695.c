#include<stdio.h>
int main()
{
    int count=0,i,j;
    char S[100];
    char T[100];
    scanf("%s",&S);
    scanf("%s",&T);
    int len1 = strlen(S);
    int len2 = strlen(S);
    for( i=0,j=0; i < len1&&j < len2; i++,j++)
        {
            if(S[i]!=T[j])
            count++;
        }
        printf("%d\n",count);
}
