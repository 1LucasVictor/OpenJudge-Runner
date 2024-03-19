#include <stdio.h>
int n,k;
int w[100000];
int MAX(int a,int b){
  if(a>b)return a;
  else return b;
}
int search(int mid){
  int i,j;
  int x=0;
  int count=0;
  for(i=0;i<n;i++){
    if(x+w[i]<=mid)x=x+w[i];
    else {x=w[i];count++;}
    
    if(count==k) return 0;
  } 
  return 1;
}
int main(){
  int i;
  int min=1,max=1000000;
  int mid;
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++){
    scanf("%d",&w[i]);
    min=MAX(w[i],min);
  }
  while(min<max){
    mid=(min+max)/2;
    if(search(mid))max=mid;
    else min=mid+1;
  }
  printf("%d\n",min);
  return 0;
}