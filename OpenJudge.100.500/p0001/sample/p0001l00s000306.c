#include<stdio.h>
int main()
{
   long long  int a,b;
    int t,k=0,l;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        k=0;
        l=0;
        while(a!=0)
        {
            t=a%10;
            a=a/10;
            if(t>0)
            k++;
        }
         while(b!=0)
        {
            t=b%10;
            b=b/10;
            if(t>0)
            l++;
        }
        printf("%d\n",k+l);


    }
    return 0;
}