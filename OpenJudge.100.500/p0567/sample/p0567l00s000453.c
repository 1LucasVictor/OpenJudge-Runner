#include<stdio.h>
int main()
{
    long long int a,b,r,d,v,u,l,c=0,t,k,n,i,j;
    scanf("%lld%lld%lld",&a,&b,&c);
    if(a-b>c){r=0;}
    else{r=c-(a-b);}
    printf("%lld\n",r);
return 0;
}
