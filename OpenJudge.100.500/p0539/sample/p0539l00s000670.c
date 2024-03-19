/* kadai3_4
   nabe9393 */

#include<stdio.h>

int main(void){
  int number, i, answer=0;
  scanf("%d", &number );
  for(i=1; i < 10; i++){
    if(number % i == 0 && number / i < 10){
      answer++;
    }
  }
  if(answer != 0){
    printf("Yes\n");
  }
  else{
    printf("No\n");
  }
return 0;
} 