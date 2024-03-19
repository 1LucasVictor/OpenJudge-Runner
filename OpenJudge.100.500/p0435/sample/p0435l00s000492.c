#include<stdio.h>
int main(){
  int n,d,a[200001],b[200001],count=0;
  scanf("%d %d",&n,&d);
  for(int i=0;i<n;i++){
    scanf("%d %d",&a[i],&b[i]);
    if(a[i]*a[i]+b[i]*b[i]<=d*d){count++;}
  }
  printf("%d\n",count);
}