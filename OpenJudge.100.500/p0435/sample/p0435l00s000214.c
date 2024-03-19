#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define rep(i,r,l) for(int i = r; i < l; i++)
#define elif else if
#define ll long long

int nextint(void){ll int n;scanf("%lld",&n);return n;}
void printint(ll int d){printf("%lld\n",d);}


int main(void){ 

    int d,n,count=0;

    scanf("%d %d",&n,&d);

    int x ,y;
    rep(i,0,n){
        scanf("%d %d",&x,&y);
        double dis=sqrt(x*x+y*y);
        if(dis<=d)count++;
    }
    printint(count);

    return 0;
}

