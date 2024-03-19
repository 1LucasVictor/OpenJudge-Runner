#include<stdio.h>
#define MAX 100000
typedef long long L;
int n,k;
L T[MAX];
int check(L P){
  int i=0,j;
  L s;
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
  L left=0,right=MAX*10000,mid;
  int v;
  while(right>left+1){
    mid=(right+left)/2;
    v=check(mid);
    if(v>=n)right=mid;
    else left=mid;
  }
  return right;
}
int main(){
  int i;
  L ans;
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++)scanf("%d",&T[i]);
  // ans=solve();
  printf("%lu\n",solve());
}