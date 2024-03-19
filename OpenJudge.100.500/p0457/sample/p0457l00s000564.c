//  cd Desktop/Atcoder
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define rep(i,n) for(i=0;i<(n);i++)
#define ll long long
#define ull unsigned long long
#define MOD 1000000007

int main(){
    ll i,n,m,k,a[200002]={},b[200002]={},num_a=0,num_b=0,sum_a=0,sum_b=0;
    scanf("%lld%lld%lld",&n,&m,&k);
    rep(i,n){
        scanf("%lld",&a[i]);
        sum_a+=a[i];
    }
    rep(i,m){
        scanf("%lld",&b[i]);
        sum_b+=b[i];
    }
    while (k>0){
        if (num_a==n&&num_b==m) break;
        if (a[num_a]>b[num_b]||a[num_a]==0){
            k-=b[num_b];sum_b-=b[num_b];
            num_b++;
        }else if(a[num_a]<b[num_b]||b[num_b]==0){
            k-=a[num_a];sum_a-=a[num_a];
            num_a++;
        }else{
            if (sum_a>sum_b){
                k-=b[num_b];sum_b-=b[num_b];
                num_b++;
            }else{
                k-=a[num_a];sum_a-=a[num_a];
                num_a++;
            }
        }
        
    }
    if (k>=0) printf("%lld",num_a+num_b);
    else printf("%lld",num_a+num_b-1);
    return 0;
}