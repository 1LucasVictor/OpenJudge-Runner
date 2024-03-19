#include<stdio.h>
int main()
{
    long long int n,k,a;
    scanf("%lld%lld",&n,&k);
    if(n>k){
        a=n%k;
        if(a<=k-a) n=a;
        else n=k-a;
    }else if(n<k){
        if(n>k-n) n=k-n;
    }else{
        n=0;
    }
    printf("%lld",n);
    return 0;
}