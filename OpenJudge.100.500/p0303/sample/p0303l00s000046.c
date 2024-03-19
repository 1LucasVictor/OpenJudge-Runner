#include<stdio.h>
#define W 10000
#define MAX 100000
int n,k;
int T[MAX];


// 最大積載量 P の k 台のトラックで何個の荷物を積めるか?
int check(int P){
    int i=0;
    for(int j=0; j<k; j++){
        int s=0;
        while(s+T[i] <= P){
            s+=T[i];
            i++;
            if(i==n) return n;
        }
    }
    return i;
}

int solve(){
    int left=0;
    int right = MAX * W; // 荷物の個数 × 1個当たりの最大重量
    int mid;
    while(right -left>1){
        mid=(left + right) /2;
        int v = check(mid);  // mid == P を決めて何個積めるかチェック
        if(v >= n) right=mid;
        else left = mid;
    }
    
    return right;
}

int main(){
    scanf("%d%d",&n,&k);
    for(int i=0; i<n; i++){
        scanf("%d",&T[i]);
    }
    int ans = solve();
    printf("%d\n",ans);
    return 0;
}
