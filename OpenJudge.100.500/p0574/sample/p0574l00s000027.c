#include <stdio.h>
int main()
{
    int i,flag=0;
    char s[4];
    scanf("%s",s);
    for(i=0;i<4;i++)
    {
        if(s[i]==s[i+1])
        {
            flag = 1;
        }
    }
    if(flag==0)
    {
        printf("Good\n");
    }
    else
    {
        printf("Bad\n");
    }
}
