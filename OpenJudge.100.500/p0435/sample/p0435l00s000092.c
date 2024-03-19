#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define ll long long
int main()
{
    ll N,X,Y,D,a=0;
    scanf("%lld%lld",&N,&D);
    D=D*D;
    for(int i=0;i<N;i++){
        scanf("%lld%lld",&X,&Y);
        if(D>=X*X+Y*Y) a++;
    }
    printf("%lld",a);
}
