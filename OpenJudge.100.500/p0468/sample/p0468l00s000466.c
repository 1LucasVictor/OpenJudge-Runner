#include<stdio.h>                                                 
#include<string.h>                                                
int main(void){                                                   
   char s[3];                                                     
   scanf("%s",s);                                                 
                                                                  
   if(!strcmp(s,"ABC")){                                          
      printf("ARC");                                              
   }else{                                                         
      printf("ABC");                                              
   }                                                              
   return 0;                                                      
} 