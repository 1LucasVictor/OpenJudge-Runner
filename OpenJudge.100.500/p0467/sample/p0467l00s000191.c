#include<stdio.h>                                                 
                                                                  
int main(void){                                                   
   int A,B,C,K;                                                   
                                                                  
   scanf("%d %d %d %d",&A,&B,&C,&K);                              
                                                                  
   if(K <= A){                                                    
      printf("%d",K);                                             
   }else if( K <= A+B){                                           
      printf("%d",A);                                             
   }else{                                                         
      printf("%d",A-(K-A-B));                                     
   }                                                              
}    