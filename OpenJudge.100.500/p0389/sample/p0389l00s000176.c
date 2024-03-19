#include <stdio.h>
#include <string.h>

int main(){

    int i,j=0,num,shuf;
    char moji[200],mojix[200],mojiy[200],mojiz[200][200],*p;
    
        
  while(1){
	  
    scanf("%s",moji);
     
    if (strcmp(moji,"-")==0) break;   
    
    scanf("%d",&num);

    p=moji;

    //printf("%s\n",moji);
    
    for(i=1;i<=num;++i){
      scanf("%d",&shuf);
      
      strcpy(mojix,p+shuf);
      strncat(mojix,p,shuf);
      
      //printf("%d %s\n",shuf,mojix);
      
      strcpy(mojiy,mojix);   
      
      p=mojiy;
         
     }
     strcpy(mojiz[j],mojix);   
     //printf("%s\n",mojix);      
     ++j;
  }
  
     for(i=0;i<j;++i) printf("%s\n",mojiz[i]);    
 
     return 0;
}