#include <stdio.h>

#define MAX 100000

typedef long long llong;

int n,k;
llong T[MAX];

int cech(llong P){
  int i=0,j;
  llong s;
  for(j=0;j<k;j++){
    s=0;
    while(s+T[i]<=P){
      s+=T[i];
      i++;
      if(i==n)return n;
    }
  }
  return i;
}

int solve(){
  llong left=0;
  llong right=10000000000;
  llong mid;
  int v;
  while(right-left>1){
    mid=(left+right)/2;
    v=cech(mid);
    if(v>=n)right=mid;
    else left =mid;
  }
  return right;
}

int main(){
  int i;
  llong ans;
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++){
    scanf("%lld",&T[i]);
  }
  ans=solve();
  printf("%lld\n",ans);

  return 0;
}

