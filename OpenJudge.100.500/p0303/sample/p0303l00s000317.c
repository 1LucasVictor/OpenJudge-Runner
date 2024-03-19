#include<stdio.h>
#define max 100000

typedef long long int llint;
int n, k;
int w[max];

int check(llint p){
    int i = 0;

    for(int j=1; j<=k; j++){
        llint s = 0;
        while(s + w[i] <= p){
            s += w[i];
            i++;
            if (i == n) return n;
        }
    }
    return i;
}

int main(){
    scanf("%d %d", &n, &k);
    for(int i=0; i<=n; i++) scanf("%d", &w[i]);

    //二分探索でPを決める
    llint left = 0, right = 100000*100000;
    while(left+1 < right){
        llint mid = (left + right) / 2;
        int v = check(mid);     //仮決めしたPでcheck

        if(v < n) left = mid;
        else right = mid;
    }

    printf("%lld\n", right);

    return 0;
}
