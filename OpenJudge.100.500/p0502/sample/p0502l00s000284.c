#include <stdio.h>
int main(void) {
    int i;
    int k;
    int N[100];
 
    do{
      scanf("%d", &k);
    }while(k<1||k>100);
  
    for(i=0; i<k; i++){
       scanf("%d", &N[i]); 
    }
    for(i=0; i<k; i++){ 
       if(N[i]%2==0){
         if((N[i]%3!=0)&&(N[i]%5!=0)){ 
           puts("DENIED"); break;
         }
         else{
           puts("APPROVED");break;
         }
       } 
       else{
         puts("DENIED");break;
       }
    }
    return 0;
}