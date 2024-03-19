#include <stdio.h>

long long gcd(long long a,long long b){long long r,tmp;if(a < b){tmp = a;a = b;b = tmp;}r = a % b;while(r != 0){a = b;b = r;r = a % b;}return b;}
long long lcm(long long a,long long b){long long r;r = gcd(a,b);r = a / r * b;return r;}

int main()
{
    long long n,k;

    scanf("%lld %lld",&n,&k);

    printf("%lld",gcd(n,k));
}
