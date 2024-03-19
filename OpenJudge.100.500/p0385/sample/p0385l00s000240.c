#include<stdio.h>
#include<string.h>
int main()
{
    int i,sum;
    char num[1000];
    while(1)
    {
        scanf("%s",&num);
        sum=0;
        for(i=0;i<strlen(num);i++)
        {
            sum+=num[i]-'0';
        }
        if(sum==0)
            break;
        printf("%d\n",sum);
    }
}
