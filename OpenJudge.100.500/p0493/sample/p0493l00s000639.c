#include<stdio.h>                                                 
                                                                  
int main(void){                                                   
   int N,ans;                                                     
   scanf("%d",&N);                                                
                                                                  
   ans = N/500*1000;                                              
   ans += (N % 500)/5*5;                                          
   printf("%d",ans);                                              
   return 0;                                                      
} 