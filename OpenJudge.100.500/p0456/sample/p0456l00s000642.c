#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,len1,len2,count=0;
    char s1[200000];
    scanf("%s",&s1);
    char s2[200000];
    scanf("%s",&s2);
    len1=strlen(s1);
    len2=strlen(s2);
    for(i=0;i<len1;i++)
    {
        if(s1[i]!=s2[i])
        {
            count++;
        }
    }
    printf("%d\n",count);
}
