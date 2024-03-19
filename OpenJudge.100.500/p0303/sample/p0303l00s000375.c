#include<stdio.h>
 
int n,m;
int a[1000000];
 
int check(int p){
  int i;
  int sum=0;
  int idx=0;
  for(i=0;i<m;i++){
    sum=0;
    while(a[idx]+sum<=p){
      sum+=a[idx];
      idx++;
      if(idx==n) return 1;
    }
  }
  return 0;
}
 
int main(){
  int i;
  int left=0,right=100000*10000;
  int mid;
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++) scanf("%d",&a[i]);
  while(right-left>1){
    mid=(left+right)/2;
    if(check(mid)==1) right=mid;
    else left=mid;
  }
  printf("%d\n",right);
  return 0;
}