#include <stdio.h>
int f(long long a,long long b)
{
    long long c;
    if(a>b){
        c=b;
        for(;c>0;c--){
            if(a%c==0&&b%c==0){
                return c;
                }}}
    else{
        c=a;
        for(;c>0;c--){
            if(a%c==0&&b%c==0){
                return c;
            }}}
}
int main()
{
    long long a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
    long long k=f(a,b);
    printf("%lld %lld\n",k,(a/k)*b);
    }
    return 0;
}