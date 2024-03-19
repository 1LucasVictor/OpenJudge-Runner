#include<stdio.h>                                                 
                                                                  
int main(void){                                                   
   int N;                                                         
   int k  = N % 10;                                               
                                                                  
   scanf("%d",&N);                                                
                                                                  
   if( k == 3){                                                   
      printf("bon");                                              
   } else if( k == 0 || k == 1 || k == 6 || k == 8){              
      printf("pon");                                              
   } else {                                                       
      printf("hon");                                              
   }                                                              
   return 0;                                                      
}    