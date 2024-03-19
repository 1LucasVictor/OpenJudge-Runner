#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define FOR(n) for(int i=0;i<n;i++)
#define FORJ(n) for(int j=0;j<n;j++)
#define PRN(n) printf("%d\n",n)
#define PRF(n) printf("%lf\n",n)
#define PRL(n) printf("%lld\n",n)
#define PRS(s) printf("%s\n",s)
#define PRC(c) printf("%c",c)
#define mod 1000000007
typedef long long int ll;
int u(const void *a, const void *b){
    return *(ll*)a-*(ll*)b;
}
int d(const void *a, const void *b){
    return *(ll*)b-*(ll*)a;
}
int min(int a,int b){
  if(a>b)return b;
  return a;
}
int max(int a,int b){
  if(a>b)return a;
  return b;
}
ll gcd(ll a,ll b){
  if(!b)return a;
  return gcd(b,a%b);
}
ll lcm(ll a,ll b){return a*b/gcd(a,b);}
int kt(ll a){
  int sum=0;
  while(a){
    a/=10;
    sum++;
  }
  return sum;
}
int ks(ll a){
  int sum=0;
  while(a){
    sum+=a%10;
    a/=10;
  }
  return sum;
}
int dp[10001];
int main(void){
  char s[100001];
  scanf("%s",s);
  int a[2]={0,0};
  FOR(strlen(s))a[s[i]-'0']++;
  PRN(min(a[0],a[1])*2);
  return 0;
}
