#include<stdio.h>
int main()
{
    long long int a,b,c=0,o,e,d=1,i,t,j,n,y,k,m,l,r=0;
    scanf("%lld%lld%lld",&k,&a,&b);

    c=a/k;
    c++;
    if((c*k>=a&&c*k<=b)||a%k==0||b%k==0){printf("OK\n");}
    else{printf("NG\n");}


}
