#include<stdio.h>
#define MAX 1000000
typedef long long llong;

int n, k;
llong T[MAX];

int check(llong P){
    int i = 0;
    int j;
    llong s;
    
    for(j = 0; j < k; j++){
        s = 0;
        while(s + T[i] <= P){
            s += T[i];
            i++;
            if(i == n) return n;
        }
    }
    return i;
}

int solve(){
    int v;
    llong left = 0;
    llong right = 100000 * 100000;
    llong mid;

    while(right - left > 1){
        mid = (left + right) / 2;
        v = check(mid);
        if(v >= n) right = mid;
        else left = mid;
    }
    return right;
}

int main(void){
    int i;
    llong ans;

    scanf("%d %d", &n, &k);
    for(i = 0; i < n; i++){
        scanf("%d", &T[i]);
    }
    ans = solve();
    printf("%d\n", ans);

    return 0;
}
