#include <stdio.h>


int main (void){
    
   int a,b;
   
   scanf("%d %d", &a, &b);
   
   if(a%2 == 0 || b%2 == 0)
     printf("Even");
   else
     printf("Odd");
    
    
    return 0;
    
}
