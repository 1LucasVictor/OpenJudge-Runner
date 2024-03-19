#include<stdio.h>
int MIN(int a, int b){return a>b?b:a;}

typedef long long int ll;

int main(void){
    ll l,r;
    scanf("%lld%lld", &l,&r);

    int time;
    if(r-l > 2019){
        printf("0\n");
        return 0;
    }

    int ans = 2019;
    for(ll i=l; i<r; i++){
        for(ll j=i+1; j<=r; j++){
            //printf("i:%d j:%d\n", i,j);
            ans = MIN(ans, i*j%2019);
        }
    }

    printf("%d\n", ans);
    return 0;
}