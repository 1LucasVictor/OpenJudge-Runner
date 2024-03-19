#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
#include<limits.h>
#define MAX 200002
typedef long long ll;
ll max(ll a,ll b){
    if(a>b) return a;
    else return b;
}
ll b_search(ll left, ll right,ll *num,ll ans){
    while(right - left > 1){
        ll mid = left + (right-left)/2;
        if(num[mid] > ans) right = mid;
        else left = mid;
    }
    return left;
}

int main(){
    ll N,M,K;
    scanf("%lld %lld %lld",&N,&M,&K);
    ll A[MAX],B[MAX];
    ll Asum[MAX]={0},Bsum[MAX]={0};
    for(ll i=1;i<=N;i++){
        scanf("%lld",A+i);
        Asum[i] = Asum[i-1] + A[i];
    }
    for(ll i=1;i<=M;i++){
        scanf("%lld",B+i);
        Bsum[i] = Bsum[i-1] + B[i];
    }
    ll keep,ans = 0;
    keep = b_search(0,N+1,Asum,K);
    for(ll i=keep;i>=1;i--){
        ans = max(ans,i+b_search(0,M+1,Bsum,K-Asum[i]));
    }
    printf("%lld",ans);
}
