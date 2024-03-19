#include<stdio.h>
int main()
{
    int a,b,c,i,sum=0;

    scanf("%d %d %d",&a,&b,&c);

    for(i=1;i>0;i++)
    {
        if(a%i==0 && b%i==0) sum++;

            if(sum==c) break;
            else continue;
    }

    printf("%d",i);

    return 0;
}
