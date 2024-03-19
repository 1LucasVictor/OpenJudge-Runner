#include<stdio.h>                                                 
#include<string.h>                                                
                                                                  
int main(void){                                                   
   char S[10];                                                    
   char T[strlen(S)+1];                                           
   int i = 0;                                                     
   scanf("%s",S);                                                 
   scanf("%s",T);                                                 
                                                                  
   int ok = 0;                                                    
                                                                  
   while(S[i] != '\0'){                                           
      if(S[i] != T[i]){                                           
         ok++;                                                    
         break;                                                   
      }                                                           
      i++;                                                        
   }                                                              
                                                                  
   if(ok == 0){                                                   
      printf("Yes");                                              
   } else{                                                        
      printf("No");                                               
   }                                                              
   return 0;                                                      
} 