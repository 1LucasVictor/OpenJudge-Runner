#include <stdio.h>
int main(void){
  long long int n,k;
  long long int tmp;
  if(scanf("%lld %lld",&n,&k)==1);
  
  while(1){
    tmp =(n>k ? n-k : k-n);
    if(n>tmp)
      n=tmp;
    else 
      break;
  }
  
  printf("%lld",n);
}