#include <stdio.h>


int main (void){
    
   int r;
   
   scanf("%d", &r);
   
   int one = r%10;
   int ten = r%100 - one;
   int hun = r-ten-one;

   int sum = one+ten/10+hun/100;
   printf("%d",sum);
    
    
    return 0;
    
}
