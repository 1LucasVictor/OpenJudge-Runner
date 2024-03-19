#include<stdio.h>

int main()
{
    int a,b,sum=0,count=0,rem;
    while(scanf("%d %d",&a,&b)!= EOF){
        sum = a+b;
        count = 0;
        while(sum!=0)
        {
            count++;
            rem=sum%10;
            sum=sum/10;
        }
        printf("%d\n",count);
    }
    return 0;
}