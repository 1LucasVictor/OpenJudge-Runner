#include<stdio.h>                                                 
                                                                  
int main(){                                                   
   int n, k;                                                        
                                                                  
   scanf("%d", &n);                                                
   k = n % 10;                                                    
                                                                  
   if(k == 3){                                                   
      printf("bon");                                              
   } else if(k == 0 || k == 1 || k == 6 || k == 8){              
      printf("pon");                                              
   } else {                                                       
      printf("hon");                                              
   }
   printf("\n");                                                              
}                                                                 
      
