#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s1[200001],t1[200001];
    scanf("%s",s1);
    scanf("\r%s",t1);
    int x,sum=0;
    x=strlen(s1);

    for(int i=0;i<x;i++)
    {
        if(s1[i]!=t1[i])
            sum++;
    }
    printf("%d",sum);
}
