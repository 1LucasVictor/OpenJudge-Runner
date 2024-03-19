#include<stdio.h>
#include<stdlib.h>
typedef long long ll;  
ll gcd(ll x,ll y)  
{  
    return y==0?x:gcd(y,x%y);  
}  
int main()  
{  
    ll x,y;  
    while(~scanf("%lld%lld",&x,&y))  
    {  
                  ll res1=gcd(x,y);  
                  printf("%lld %lld\n",res1,x*y/res1);  
    }  
    return 0;  
} 