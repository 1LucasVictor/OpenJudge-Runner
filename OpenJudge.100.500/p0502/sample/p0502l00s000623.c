#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include <time.h>
typedef long long ll;
typedef long double ld;
#define INF (1LL<<60)
#define MOD1 1000000007
/*swap 交換*/
void swap(ll *a, ll *b){ll c;c=*b;*b=*a;*a=c;}
/*2つのうち大きい数を返す*/
ll max2(ll a,ll b){return a>=b?a:b;}
/*2つのうち小さい数を返す*/
ll min2(ll a,ll b){return a>=b?b:a;}
/*絶対値*/
ll ABS(ll a){return a>=0?a:(-a);}
typedef struct{
    ll aa;
    ll bb;
}frequent;
// 小大
int compare(const void *a, const void *b){return *(ll *)a - *(ll *)b;}

int main(void){
    ll n,i;
    scanf("%lld",&n);
    ll a[n];
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            if(a[i]%3==0 || a[i]%5==0){
            }else{
                break;
            }
        }
    }
    if(i==n) printf("APPROVED\n");
    else printf("DENIED\n");
    return 0;
}
