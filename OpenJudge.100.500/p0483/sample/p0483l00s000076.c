#include<stdio.h>
int main()
{
    char s[4];
    int i,count=0;
    scanf("%s",&s);
    for(i=0; i<3; i++)
    {
        if(s[i]=='7')
            count++;
    }
    if(count==0)
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }
    return 0;
}
