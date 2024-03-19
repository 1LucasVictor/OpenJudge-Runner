/* kadai3_4
   nabe9393 */
 
#include<stdio.h>
 
int main(void){
  int number, divisor, answer=0; //answerの値で判断。
  scanf("%d", &number ); //入力
  for(divisor=1; divisor < 10; divisor++){ //初期化　条件判定　更新
    if(number % divisor == 0 && number / divisor < 10){ //割り切れて尚且つ商が１０未満
      answer++; //answerに１を足す
    }
  }
  if(answer != 0){ //answerが０ではない時がYes
    printf("Yes\n");
  }
  else{
    printf("No\n");
  }
return 0;
} 