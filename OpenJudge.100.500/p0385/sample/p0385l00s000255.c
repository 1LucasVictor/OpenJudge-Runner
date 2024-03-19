#include<stdio.h>
int main(void)
{
    while(1){
        int i=0;
        int sum=0;
        char num[1001]={};
        scanf("%s",num);
        if(num[0]-'0'==0){break;}
        while(num[i])
        {
            sum+=num[i]-'0';
            i++;
        }
        printf("%d\n", sum);
    }
    return 0;
}