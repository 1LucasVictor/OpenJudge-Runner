#include <stdio.h>
int main(void){
  int n,k,sa;
  scanf("%d %d",&n,&k);
  while(n >= k || n-k > -n){
    n = n-k;
    if(n < 0 )
      n = -n;
  }
  printf("%d",n);
  
  return 0;
}