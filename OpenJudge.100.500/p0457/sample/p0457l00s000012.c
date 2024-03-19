#include<stdio.h>
int main(){
  long int n,m,k,i,a[200001]={0},b[200001]={0},x,r=0;
  scanf("%ld%ld%ld",&n,&m,&k);
  for(i=1;i<=n;i++){scanf("%ld",&a[i]);a[i]+=a[i-1];}
  for(i=1;i<=m;i++){scanf("%ld",&b[i]);b[i]+=b[i-1];}
  x=m;
  for(i=0;i<=n;i++){
    while(x>0&&a[i]+b[x]>k)x--;
    if(a[i]+b[x]<=k)r=i+x<r?r:i+x;
  }
  printf("%ld",r);
}
