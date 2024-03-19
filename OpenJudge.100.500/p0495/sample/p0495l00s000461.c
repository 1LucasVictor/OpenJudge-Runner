#include<stdio.h>                                                 
#include<string.h>                                                
int main(void){                                                   
   char s[3];                                                     
   int cntA,cntB;                                                 
   scanf("%s",s);                                                 
                                                                  
   cntA = cntB = 0;                                               
   for(int i = 0; i < 3; i++){                                    
      if(s[i] == 'A'){                                            
         cntA++;                                                  
      }else{                                                      
         cntB++;                                                  
      }                                                           
   }                                                              
   if(cntA >= 1 && cntB >= 1){                                    
      printf("Yes");                                              
   }else{                                                         
      printf("No");                                               
   }                                                              
   return 0;                                                      
} 