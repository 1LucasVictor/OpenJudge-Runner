#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define rep(i,r,l) for(int i = r; i < l; i++)
#define elif else if
#define ll long long

int nextint(void){ll int n;scanf("%lld",&n);return n;}
void printint(ll int d){printf("%lld\n",d);}


int main(void){ 

    ll d,n;
    int count=0;

    scanf("%lld %lld",&n,&d);

    ll x ,y;
    rep(i,0,n){
        scanf("%lld %lld",&x,&y);
        if(x*x+y*y<=d*d)count++;
    }
    printint(count);

    return 0;
}

