#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,flag=0;
    char digit[4];
    scanf("%s",digit);
    for(i=0;i<3;i++)
    {
        if(digit[i]=='7')flag++;
    }
    if(flag==0)printf("No");
    else printf("Yes");
    return 0;
}