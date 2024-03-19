#include<stdio.h>   
int main(void)      
{                   
  int a,b;          
                    
  scanf("%d%d",&a,&b); 
                    
/*                  
  if(a<1 || a>16){  
    return 0;       
  }else if(b<1 || b>16){
    return 0;       
  }else if(a+b>16){ 
    return 0;       
  }                 
*/                  
                    
  if(a >= 8 || b >= 8){
    printf(":(\n"); 
  }else if(a<1 || b<1){
    printf(":(\n"); 
  }else{            
    printf("Yay!\n");                                   
  }                 
                    
  return 0;         
}