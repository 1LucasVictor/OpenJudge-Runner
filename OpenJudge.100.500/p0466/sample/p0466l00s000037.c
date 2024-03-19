#include<stdio.h>
int main()
{
    char s[10];
    char t[11];
    int i,j,count=0;
    scanf("%s",&s);
    scanf("%s",&t);
    int len = strlen(s);
    for(i=0,j=0; i<len; i++,j++)
    {
        if(s[i]==t[j])
            count++;
    }
    if(count==len)
        printf("Yes");
    else
        printf("No");
    return 0;
}
