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
//#define N 998244353

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
  long long int n,m,k,i,j,aa,num,ans;
  scanf("%lld %lld %lld", &n, &m, &k);
  long long int a[200010],b[200010];
  a[0] = b[0] = 0;
  for(i = 1; i <= n; i++) {
    scanf("%lld", &a[i]);
  }
  for(j = 1; j <= m; j++) {
    scanf("%lld", &b[j]);
  }
  aa=n+m;
  i=1;
  j=1;
  ans=0;
  while(num<=k){
    if(a[i]<=b[j] && i<=n && j<=m){
      num+=a[i];
      i++;
      ans++;
    }
    else if(a[i]>=b[j] && i<=n && j<=m){
      num+=b[j];
      j++;
      ans++;
    }
    else if(i==n+1 && j<=m){
      num+=b[j];
      j++;
      ans++;
    }
    else if(i<=n && j==m+1){
      num+=a[i];
      i++;
      ans++;
    }
    else if(i==n+1 && j==m+1){
      ans++;
      break;
    }
    else{
      ans++;
      //printf("kono baai ha nai hazu\n");;
    }

  }
  //if(ans==aa+1){
  //  ans-=1;
  //}
  printf("%lld\n", ans-1);

  return 0;
}
