#include<stdio.h>

int main(void){
  int n,cnt=0;
  long long d,x,y;
  int i;
  
  scanf("%d%lld",&n,&d);
  d*=d;
  for(i=0;i<n;i++){
    scanf("%lld%lld",&x,&y);
    if(x*x+y*y<=d)
      cnt++;
  }
  
  printf("%d\n",cnt);
  
  return 0;
}