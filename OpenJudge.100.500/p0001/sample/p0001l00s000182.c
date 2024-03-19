#include<stdio.h>
int main()
{
    int a,b,sum,n;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        sum=a+b;
        n=0;
        while(sum!=0)
        {
            sum=sum/10;
            n++;
        }
        printf("%d\n",n);
    }
    return 0;
}
