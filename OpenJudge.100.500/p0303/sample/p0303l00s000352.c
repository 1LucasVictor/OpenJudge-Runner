#include <stdio.h>
int allocation(int *,int,int);
int check(int *,int,int,int);
int main(){
  int ans,i,n,k,w[10000];
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++)scanf("%d",&w[i]);
  ans=allocation(w,n,k);
  printf("%d\n",ans);
  return 0;
}

int allocation(int *w,int n,int k){
  int left=0,right=10000000,v;
  int mid;
  while(right-left>1){
    mid=(right+left)/2;
    v=check(w,n,k,mid);
    if(v>=n)right=mid;
    else left=mid;
  }
  return right;
}
int check(int *w,int n,int k,int P){
  int i,j=0,x;
  for(i=0;i<k;i++){
    x=0;
    while(x+w[j]<=P){
      x+=w[j];
      j++;
      if(n==j)return n;
    }
  }
  return j;
}



