#include<stdio.h>

int main(void){
  
  int n,i;
  long long d;
  long long x[100001],y[100001];
  scanf("%d %lld",&n,&d);
  for(i=0;i<n;i++){
   scanf("%lld %lld",&x[i],&y[i]); 
  }
  
   int cnt = 0;
	for(i=0;i<n;i++){
      long long a = x[i]*x[i];
      long long b = y[i]*y[i];
      long long c = d * d;
      if(a+b <= c) cnt++;
    }
  printf("%d",cnt);
}