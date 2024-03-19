#include <stdio.h>

int main()
{
    unsigned long int a,b,sum,i,count;

    while(scanf("%lu %lu",&a,&b)!=EOF)
    {
        sum=a+b;
        count=0;
        for(i=0; sum!=0; i++)
        {
            sum=sum/10;
            count++;
        }
        printf("%d\n",count);
    }

    return 0;
}