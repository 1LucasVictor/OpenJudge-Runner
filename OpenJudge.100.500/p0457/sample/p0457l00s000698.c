#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define ll long long
#define INF 1<<31-1
#define LNF 9223372036854775807
#define PI 3.14159265358979
#define MIN(x,y) ((x)<(y)?(x):(y))
#define MAX(x,y) ((x)<(y)?(y):(x))
#define FOR(i,a,n) for(i=a;i<n;i++)
#define MOD 1000000007
//#define MOD 998244353
#define NUM 200010
 
void swap(int* a,int* b){int tmp=*a;*a=*b;*b=tmp;}
int abs(int a){if(a<0)return -a;return a;}
int dup(int a,int d){if(a%d==0)return a/d;else return a/d+1;}
int mod(int a,int m){if(a<0)return a%m+m;else return a%m;}

void swapl(ll* a,ll* b){ll tmp=*a;*a=*b;*b=tmp;}
ll absl(ll a){if(a<0)return -a;return a;}
ll dupl(ll a,ll d){if(a%d==0)return a/d;else return a/d+1;}
ll modl(ll a,ll m){if(a<0)return a%m+m;else return a%m;}

ll GCD(ll a,ll b){ll c=1,tmp=MAX(a,b);b=MIN(a,b);a=tmp;while(c!=0){c=a%b;a=b;b=c;}return a;}
ll LCM(ll a,ll b){return a*b/GCD(a,b);}

ll factorial(ll n, ll m) {return n < m ? 1 : n*factorial(n-1, m);}

int upll(const void*a, const void*b){return*(ll*)a<*(ll*)b?-1:*(ll*)a>*(ll*)b?1:0;}
int downll(const void*a, const void*b){return*(ll*)a<*(ll*)b?1:*(ll*)a>*(ll*)b?-1:0;}
void sortup(ll*a,int n){qsort(a,n,sizeof(ll),upll);}
void sortdown(ll*a,int n){qsort(a,n,sizeof(ll),downll);}

// ll dp[]

int main(){
  ll n, m, k;
  ll nstop, mstop;
  ll a[200001], b[200001];
  ll i, j, l, sum, sum_a;

  scanf("%lld%lld%lld", &n, &m, &k);
  nstop = n; mstop = m;

  sum_a = 0;
  for (i = 0; i < n; i++)
  {
      scanf("%lld", a + i);
      sum_a += a[i];
      if(sum_a > k) {
          sum_a -= a[i];
          nstop = i - 1;
      }
  }
  for (l = i; i < n; l++)
  {
      scanf("%lld", a + l);
  }
  
  sum= 0;
  for (i = 0; i < m; i++)
  {
      scanf("%lld", b+i);
  }
  
  sum = 0;
  for (j = 0; j < m; j++)
  {
      sum += b[j];
      if(sum > k - sum_a){
          j--;
          break;
      }
  }
  
  // a[i] を減らしてみる
  for (i = nstop; i >= 0; i--)
  {
      sum = 0;
      for (l = j+1; l < m; l++)
      {
          sum += b[l];
          if(sum > a[i]) {
              break;
          }
      }
      
      if (l == j+1 || l == m)
      {
          j = l-1;
          break;
      }
      j = l-1;
  }
  
  printf("%lld\n", i + j + 2);
  return 0;
}