#include <stdio.h>

int main(void){

  int data1, data2, seki;
  
  scanf("%d%d", &data1, &data2);

  seki = data1 * data2;

  if(seki % 2 == 0){
    printf("Even\n");
  } else {
    printf("Odd\n");
  }
    
  return 0;                    

}