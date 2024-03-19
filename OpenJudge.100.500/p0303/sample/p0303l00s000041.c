#include<stdio.h>
#define MAX 100000
int n,k;
long long T[MAX];
int check(long long P){
  int i,j=0;
  long long s;
  for(i=0;i<k;i++){
    s=0;
    while(s+T[j]<=P){
      s+=T[j];
      j++;
      if(j==n)return n;
    }
  }
  return j;
}
int solve(){
  long long left=0;
  long long right=MAX*10000;
  long long mid;
  while(right-left>1){
    mid=(right+left)/2;
    int v=check(mid);
    if(v>=n)right=mid;
    else left=mid;
  }
  return right;
}
int main(){
  int i;
  long long ans;
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++)scanf("%d",&T[i]);
  ans=solve();
  printf("%lld\n",ans);
}