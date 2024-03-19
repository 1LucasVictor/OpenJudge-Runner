#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define ll long long
#define rep(i,l,r)for(ll i=(l);i<(r);i++)
#define repp(i,l,r,k)for(ll i=(l);i<(r);i+=(k))
#define INF ((1LL<<62)-(1LL<<31))
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))
#define bit(n,m)(((n)>>(m))&1)
int upll(const void*a, const void*b){return*(ll*)a<*(ll*)b?-1:*(ll*)a>*(ll*)b?1:0;}
int downll(const void*a, const void*b){return*(ll*)a<*(ll*)b?1:*(ll*)a>*(ll*)b?-1:0;}
void sortup(ll*a,int n){qsort(a,n,sizeof(ll),upll);}
void sortdown(ll*a,int n){qsort(a,n,sizeof(ll),downll);}
ll pom(ll a,ll n,int m){ll x=1;for(a%=m;n;n/=2)n&1?x=x*a%m:0,a=a*a%m;return x;}
//#define MOD 998244353
#define MOD 1000000007
#define invp(a,p)pom(a,p-2,p)

int main(){
    int n;
    scanf("%d",&n);
  int a[n+1];
  int b[n+1];
  int c[n+1];
  int d[n+1];
  
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    b[i]=a[i]%2;
    c[i]=a[i]%3;
    d[i]=a[i]%5;
    }

  for(int i=0;i<n;i++){
    if(b[i]==0){
      if(c[i]!=0 && d[i]!=0){
        printf("DENIED");
        return 0;
    }
  }
  }
    printf("APPROVED");
  return 0;
}