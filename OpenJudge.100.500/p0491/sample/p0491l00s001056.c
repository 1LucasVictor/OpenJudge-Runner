#include <stdio.h>
int main(void){
  long long int n,k;
  long long int tmp;
  scanf("%lld %lld",&n,&k);
  
  while(1){
    tmp =(n>k ? n-k : k-n);
    if(n>tmp)
      n=tmp;
    else 
      break;
  }
  
  printf("%lld",n);
}