#include <stdio.h>
#include <math.h>
#define ll long long

void main(){
    ll N,D;
    ll X[200002],Y[200002]; 
    int sum = 0;
    scanf("%lld%lld",&N,&D);
    for(int i = 0;i < N;i++){
        scanf("%lld%lld",X+i,Y+i);
        if(sqrt(X[i]*X[i]+Y[i]*Y[i]) <= D)sum++;
    }
    printf("%d\n",sum);
}