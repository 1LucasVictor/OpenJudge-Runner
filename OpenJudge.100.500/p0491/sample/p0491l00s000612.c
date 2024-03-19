#include<stdio.h>
int main ()
{
    long long n,k,x;
    scanf("%lld %lld", &n, &k);
    if(k>=n){x=n;}
    else{if(n%k==0){x=0;}
        else{k=k*((n/k)+1);
         x=n-k;
         if(x<0){x=-x;}
        }}
    printf("%lld ", x);

}
