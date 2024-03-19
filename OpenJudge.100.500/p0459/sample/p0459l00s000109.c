#include<stdio.h>                                                 
                                                                  
int main(void){                                                   
   int x,y;                                                       
   scanf("%d %d",&x,&y);                                          
                                                                  
   if(y < 2*x || 4*x < y){                                        
      printf("No");                                               
   } else {                                                       
      if(y % 2 == 1){                                             
         printf("N0");                                            
      } else {                                                    
         printf("Yes");                                           
      }                                                           
   }                                                              
   return 0;                                                      
} 