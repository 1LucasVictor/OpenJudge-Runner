#include<stdio.h>
int main()
{
   long long int a,b,c,k;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&k);
    int s=0;
    while(k!=0){k=k-1;
        s++;
        a--;
        if(a==0){break;}}
    while(k!=0)
    { k=k-1;
        b--;
        if(b==0){break;}
        }
    while(k!=0)
    {k=k-1;
        s=s-1;
        c--;
        if(c==0){break;}}
        
    printf("%lld",s);
    return 0;
}