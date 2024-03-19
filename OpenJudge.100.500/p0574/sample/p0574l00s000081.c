#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char digit[1000];
    int i;
    scanf("%s",digit);
    int len=strlen(digit);
    int flag=0;
    for(i=0;i+1<len;i++)
    {
        if(digit[i]==digit[i+1])
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        printf("Bad\n");
    }
    else
    {
        printf("Good\n");
    }
    return 0;
}