#include <stdio.h>

int main(void){
 int a,b;
  sscanf("%d %d\n",&a,&b);
  if(a*b%2 == 0) printf("Even");
  else printf("Odd");
  
  return 0;
}