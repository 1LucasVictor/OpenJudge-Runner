#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]=='A' && str[i+1]=='R')
    {
        printf("ABC");
        break;
    }
    else
    {
        printf("ARC");
        break;
    }
    }


    return 0;
}
