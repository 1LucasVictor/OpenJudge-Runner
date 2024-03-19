#include<stdio.h>

typedef long long ll;

int main(void){
    ll L, R;
    ll i, j;
    ll Lp, Lq, Rp, Rq; 

    scanf("%llu %llu", &L, &R);

    Lq = L%2019;
    Rq = R%2019;

    if(R - L >= 2019){
        printf("0");
        return 0;
    }else if(Lq > Rq){
        printf("0");
        return 0;
    }else{
        printf("%lld", (Lq*(Lq+1)));
        return 0;
    }

}