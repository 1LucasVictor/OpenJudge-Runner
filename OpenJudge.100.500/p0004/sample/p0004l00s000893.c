#include<stdio.h>
int main()
{
    int a,b,i,gcd;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        for(i=1;i<=a||i<=b;++i)
        {
            if(a%i==0&&b%i==0)
            {
                gcd=i;
            }
            }

        printf("%d %d",gcd,((a/gcd)*(b/gcd)*gcd));
    }
    return 0;
}