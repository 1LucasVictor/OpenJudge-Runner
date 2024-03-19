#include <stdio.h>

int main(){
  
  int n;
  scanf("%d",&n);
  
  if((n/100)==7 || ((n/10)%10)==7 || (n%10)==7) puts("Yes");
  else puts("No");

  return 0;
}