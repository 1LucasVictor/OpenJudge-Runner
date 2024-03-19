/* ex3_4
   shu_t */

#include<stdio.h>
#include<stdlib.h>

int main(void){
  int number;
  //roop variable
  int i,j;
  
  int LIMIT = 9;
  //input number
  scanf("%d",&number);
  
  //full search
  for(i=1; i <= LIMIT; i++){
    for(j=1; j<= LIMIT; j++){
      //number equal 1~9 multipled by 1~9
      if(number == i*j){
        printf("Yes\n");
        //forced termination
        exit(0);
      }
    }
  }
  //nothing
  printf("No\n");
  return 0;
}