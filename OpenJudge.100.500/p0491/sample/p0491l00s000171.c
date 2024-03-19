#include <stdio.h>

int main(void){
  
  long int n,k;
  scanf("%ld %ld",&n,&k);
  
  long int t = n%k;
  
  int long ans = (t<k-t) ? t : k-t;
  
  printf("%ld",ans);
  
  return 0;
}