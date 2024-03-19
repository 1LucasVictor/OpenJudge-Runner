#include<stdio.h>
int main()
{
    int a,b,i,gcd,c,d,lcm,x,y;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        x=a;
        y=b;
        while(a!=b)
        {
            if(a>b)
            {
                a-=b;
            }
            else {b-=a;}
        }
        gcd=a;
            c=x/gcd;
            d=y/gcd;
            lcm=c*d*gcd;

        printf("%d %d",gcd,lcm);
    }
    return 0;
}