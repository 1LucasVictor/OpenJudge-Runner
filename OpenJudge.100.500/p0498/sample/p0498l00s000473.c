#include<stdio.h>                                                 
                                                                  
int main(void){                                                   
   int N,page;                                                    
   scanf("%d",&N);                                                
   page = (N / 2);                                                
                                                                  
   if(N % 2 == 1){                                                
      page += 1;                                                  
   }                                                              
   printf("%d\n",page);                                           
   return 0;                                                      
}  