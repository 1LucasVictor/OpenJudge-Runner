#include<stdio.h>
int main(){
  int n,i,count=0;
  long long d;
  scanf("%d%lld",&n,&d);
  d=d*d;
  for(i=0;i<n;i++){
    long long x,y;
    scanf("%lld%lld",&x,&y);
    if(d>=x*x+y*y)
      count++;
  }
  printf("%d\n",count);
  return 0;
}
