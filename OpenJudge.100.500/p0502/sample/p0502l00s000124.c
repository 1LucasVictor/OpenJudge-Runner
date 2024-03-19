#include <stdio.h>
int main(void) {
    int number;
    int i;
    int num[100];
    int block = 0;
 
    do{
      scanf("%d", &number);
    }while(number < 1 || number > 100);
  
    for(i = 0; i < number; i++){
       do{
       scanf("%d", &num[i]); 
       }while(num[i] < 1 || num[i] > 1000);
    }
  
    for(i = 0; i < number; i++){ 
       if(num[i] % 2 == 0){
         if(num[i] % 3 != 0 && num[i] % 5 != 0){ 
           block=1;
         }
       } 
    }
    if(block==0) {
      printf("APPROVED");
    }else{
      printf("DENIED");
    }
    return 0;
}