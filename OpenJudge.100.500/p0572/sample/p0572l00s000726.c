//133_c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
#include<assert.h>

typedef long long ll;
#define rep(i,a,b,c) for(ll i=(a);i<(b);i+=(c))
#define INF (1LL<<60)

ll min(ll a, ll b){if(a<b)return a;else return b;}
ll max(ll a, ll b){if(a>b)return a;else return b;}
ll POW(ll a, ll b){ll c=1,i;rep(i,0,b,1)c*=a;return c;}
ll gcd(ll a, ll b){if(a%b==0)return b;else gcd(b,a%b);}
ll lcm(ll a, ll b){return a*b/gcd(a,b);}
int up(const void *a, const void *b){return *(ll*)a-*(ll*)b;}
int down(const void *a, const void *b){return *(ll*)b-*(ll*)a;}
void sortup(ll*a,int n){qsort(a,n,sizeof(ll),up);}
void sortdown(ll*a,int n){qsort(a,n,sizeof(ll),down);}
void swap(ll *a, ll *b){ll c; c=*b;*b=*a;*a=c;}

ll a[2020]={};

int main(void){
    ll L,R,k=0,ans=1;
    scanf("%lld %lld",&L,&R);
    rep(i,L,R+1,1){
        a[i%2019]++;
    }
    rep(i,0,2019,1){
        if(a[i]==0)continue;
        if(a[0]>0){
            ans=0;
            break;
        }
        if(k==0){
            if(a[i]>=2){
                ans=i*i;
                break;
            }else if(a[i]==1){
                ans*=i;
                k++;
            }
        }else if(k==1){
            if(a[i]>0){
                ans*=i;
                break;
            }
        }else break;
    }
    printf("%lld\n",ans);
    return 0;
}