#include <stdio.h>
 
int main(void){
  int a, b, n;
  scanf("%d %d %d", &n, &a, &b);
  
  if ((n*a) < b)
  {
    printf("%d", n*a);
  }
  else
  {
    printf("%d", b);
  } 
  return 0;
}