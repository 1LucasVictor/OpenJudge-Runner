#include <stdio.h>
//#include <string.h>

int main(void){

  int n,a,b= 0;
  scanf("%d %d %d", &n, &a, &b);
  
  if(n*a>=b) printf("%d", b);
  else printf("%d", n*a);

  return 0;
}

  