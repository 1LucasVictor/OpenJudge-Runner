#include <stdio.h>
#include <math.h>
 
int main(void){
 double a = 2.0;
 int sum = 0.0;
 double x = 0.0;
 double y = 0.0;
  
  x = pow(a, 2.0);
  y = pow(a, 3.0);
  sum = a + x + y;
  
 // printf("a = ");
  //scanf("%d", &a);
  

   
  if(a > 0 || a <= 10){
   printf("%d\n", sum);
  }
  
  return 0;
}