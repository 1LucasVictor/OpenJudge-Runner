#include <stdio.h>                                                                 
#include <string.h>                                                                
                                                                                   
#define MAX 500                                                                    
                                                                                   
int main() {                                                                       
        char W[MAX];                                                               
        int n, h,i,length;                                                         
                                                                                   
        while(1){                                                                  
          scanf("%s", W);                                                          
          if(W[0] == '-') break;                                                   
                                                                                   
          length = strlen(W);                                                      
                                                                                   
          scanf("%d", &n);                                                         
                                                                                   
          for (i = 0; i < n; i++) {                                                
                scanf("%d",&h);             
                strncpy(&W[length],W,h);                                           
                strncpy(W,&W[h],length);                                           
                W[length] = '\0';                                                  
           }                                                                       
             printf("%s\n", W);                                                    
        }                                                                          
                                                                                   
        return 0;                                                                  
                                                                                   
}                                                                                  

