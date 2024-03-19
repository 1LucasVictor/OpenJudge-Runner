#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
#include<limits.h>
#define MAX 200002
typedef long long ll;
int main(){
    ll N,D;
    scanf("%lld %lld",&N,&D);
    ll X[MAX],Y[MAX];
    ll dist;
    ll ans=0;
    for(int i=0;i<N;i++){
        scanf("%lld %lld",X+i,Y+i);
        dist = X[i]*X[i] + Y[i]*Y[i];
        if(dist <= D*D)
            ans++;
    }
    printf("%lld",ans);
}
