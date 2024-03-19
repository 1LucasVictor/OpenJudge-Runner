#include<stdio.h>
#define MAX 100000

typedef long long l;

int n,k;
l T[MAX];
int check(l P){
  int i=0;
  for(int j=0;j<k;j++){
    l s=0;
    while(s+T[i]<=P){
      s+=T[i];
      i++;
      if(i==n)return n;
    }
  }
  return i;
}
int solve(){
  l left=0;
  l right=100000*10000;
  l mid;
  while(right-left>1){
    mid=(left+right)/2;
    l v=check(mid);
    if(v>=n)right=mid;
    else left=mid;
  }
  return right;
}
int main(void){
  scanf("%d %d",&n,&k);
  for(int i=0;i<n;i++){
      scanf("%lld",&T[i]);
  }
  l ans=solve();
  printf("%lld\n",ans);
  return 0;
}
