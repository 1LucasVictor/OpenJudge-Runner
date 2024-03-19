//C - Tsundoku
//Hiia
#include <stdio.h>
#include <stdlib.h>//rannsuu, zettaichi(absolute)
#include <time.h>
//srand((unsigned int) time(0));
#include <math.h>//koudona keisann
#include <string.h>//hairetsu
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))
#define N 998244353

int gcd(int m,int n){if((0==m)||(0==n))return 0;while(m!=n)if(m>n)m=m-n;else n=n-m;return m;}
int lcm(int m,int n){if((0==m)||(0==n))return 0;return(m*n/gcd(m, n));}
int fact(int x){if(x==1) return(x);else return(x*fact(x-1));}//Kaijou x!
int ruijou(int base,int exponent){int i,answer=1;i=exponent;while(i!=0){answer=answer*base;--i;}return answer;}//ruijou base^exponent

long long int llgcd(long long int m,long long int n){if((0==m)||(0==n))return 0;while(m!=n)if(m>n)m=m-n;else n=n-m;return m;}
long long int lllcm(long long int m,long long int n){if((0==m)||(0==n))return 0;return(m*n/llgcd(m, n));}
long long int llfact(long long int x){if(x==1) return(x);else return(x*llfact(x-1));}//Kaijou
int llruijou(long long int base,long long int exponent){long long int i,answer=1;i=exponent;while(i!=0){answer=answer*base;--i;}return answer;}//ruijou base^exponent

int main()
{
  long long int n,m,k,i,j,inin,num,num2=0,ans,aa,bb,a[200010]={},b[200010]={};
  scanf("%lld %lld %lld", &n, &m, &k);
  for(i = 1; i <= n; i++) {
    scanf("%lld", &aa);
    a[i]=a[i-1]+aa;
  }
  for(j = 1; j <= m; j++) {
    scanf("%lld", &bb);
    b[j]=b[j-1]+bb;
  }

  ans=0;
  inin=0;
  for(i = 0; i <= n; i++) {
    for(j = m-num2; j >= 0; j--) {
      if(a[i]+b[j]<=k){
        ans=max(ans,i+j);
        break;
      }
      num2++;
    }
  }

  printf("%lld\n", ans);

  return 0;
}