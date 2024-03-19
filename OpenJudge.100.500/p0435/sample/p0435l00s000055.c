#include<stdio.h>

int main(void){
  long long n,d;
  scanf("%lld %lld",&n,&d);
  long long x[n],y[n];
  int c=0;
  for(long long i=0;i<n;i++){
    scanf("%lld %lld",&x[i],&y[i]);
    if((x[i]*x[i]+y[i]*y[i])<=d*d){
    c++;
  }
  }

  
  printf("%d",c);
  return 0;
}
