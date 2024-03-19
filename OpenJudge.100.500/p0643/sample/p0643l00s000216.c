#include <stdio.h>

int main (void){
  
  long a, b;
  
  scanf("%ld %ld", &a, &b);
  
  if ( (a*b)%2 == 0 ) {printf("Even");}
  else {printf("Odd");}
  
  return 0;
}