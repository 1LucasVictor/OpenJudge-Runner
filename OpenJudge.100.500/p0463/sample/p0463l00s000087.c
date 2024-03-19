#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  if(n % 10 == 0 || n % 10 == 1 || n % 10 == 6 || n % 10 == 8) puts("pon");
  else if(n % 10 == 3) puts("bon");
  else puts("hon");
  return 0;
}
