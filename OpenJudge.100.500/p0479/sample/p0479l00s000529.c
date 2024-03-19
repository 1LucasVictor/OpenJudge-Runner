#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#define FOR(i,n) for(int i=0;i<n;i++)
#define PRN(n) printf("%d\n",n)
#define PRF(n) printf("%lf\n",n)
#define PRL(n) printf("%lld\n",n)
#define PRS(s) printf("%s\n",s)
#define PRC(c) printf("%c",c)
#define INI(n) scanf("%d",&n)
#define INL(n) scanf("%lld",&n)
#define INF 10000000000
#define mod 1000000007
#define X 100000
#define N 20
#define M 46
typedef long long int ll;
ll finv[X];
ll fac[X];
ll inv[X];
ll usort(const void *a, const void *b){return *(ll*)a-*(ll*)b;}
ll dsort(const void *a, const void *b){return *(ll*)b-*(ll*)a;}
ll ssort(const void *a, const void *b){return strcmp((char*)a,(char*)b);}
void Iswap(int *a,int *b){
  int t=*a;
  *a=*b;
  *b=t;
}
void Fswap(double *a,double *b){
  double t=*a;
  *a=*b;
  *b=t;
}
void Lswap(ll *a,ll *b){
  ll t=*a;
  *a=*b;
  *b=t;
}
ll min(ll a,ll b){
  if(a>b)return b;
  return a;
}
ll max(ll a,ll b){
  if(a>b)return a;
  return b;
}
ll z(ll a){return max(a,-a);}
ll gcd(ll a,ll b){if(!b){return a;}else{return gcd(b,a%b);}}
ll lcm(ll a,ll b){return a*b/gcd(a,b);}
ll kt(ll a){
  ll sum=0;
  while(a){
    a/=10;
    sum++;
  }
  return sum;
}
ll ks(ll a){
  ll sum=0;
  while(a){
    sum+=a%10;
    a/=10;
  }
  return sum;
}
void nCrReady(){
  fac[0]=fac[1]=1;
  finv[0]=finv[1]=1;
  inv[1]=1;
  for (ll i=2;i<X;i++){
    fac[i]=fac[i-1]*i%mod;
    inv[i]=mod-inv[mod%i]*(mod/i)%mod;
    finv[i]=finv[i-1]*inv[i]%mod;
  }
}
ll nCr(ll n,ll k){return fac[n]*(finv[k]*finv[n-k]%mod)%mod;}
ll modpow(ll a,ll n){
  ll res=1;
  while(n>0){
    if(n&1)res=res*a%mod;
    a=a*a%mod;
    n>>=1;
  }
  return res;
}
int a[200001];
int main(void){
  int n;
  INI(n);
  int x;
  FOR(i,n-1){
    INI(x);
    a[x-1]++;
  }
  FOR(i,n)PRN(a[i]);
  return 0;
}