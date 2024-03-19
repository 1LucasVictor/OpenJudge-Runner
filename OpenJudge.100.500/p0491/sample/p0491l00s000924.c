#include<stdio.h>
int main(){
    long long n,k,x,y;
    scanf("%lld %lld", &n,&k );
    x = n%k; y = abs(x-k);
    if (x>y)
    printf("%lld\n",y);
    else
    printf("%lld\n",x );
}
