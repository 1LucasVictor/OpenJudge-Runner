#include<stdio.h>
int main()
{
    int a,b,c,count=0,temp,i;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        temp=b;
        b=a;
        a=temp;
    }
    for(i=a;i<=b;i++)
    {
        if(c%i==0)
            count++;
    }
    printf("%d\n",count);
    return 0;
}

