#include <stdio.h>
 
int main(void){
  
 int i;
 int N = 0;
 int number = 0; 
 
  
  scanf("%d", &N);
    
  for(i = 0; i < N; i++){
    scanf("%d", &number);
     if(number % 2 == 0){
      if(number % 3 != 0 ){
        if(number % 5 != 0){
        printf("DENIED\n");
        break;
        }
      }
    }
  }
  
  if(i == N ){
   printf("APPROVED\n");
  }
  
  
  return 0;
}