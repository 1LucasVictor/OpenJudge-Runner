#include<stdio.h>                                                 
                                                                  
int main(void){                                                   
   int X,Y;                                                       
   scanf("%d %d",&X,&Y);                                          
                                                                  
   if(Y < 2*X || 4*X < Y){                                        
      printf("No");                                               
   } else if(Y % 2 == 1){                                         
         printf("N0");                                            
   } else {                                                       
         printf("Yes");                                           
      }                                                           
   return 0;                                                      
} 