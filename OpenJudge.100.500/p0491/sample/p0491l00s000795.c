#include <stdio.h>

int main(void){
  
  long int n,k;
  scanf("%ld %ld",&n,&k);
  
  long int t = n%k;
  
  int ans = (t<k-t) ? t : k-t;
  
  printf("%d",ans);
  
  return 0;
}