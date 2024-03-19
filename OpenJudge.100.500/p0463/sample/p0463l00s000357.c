/* ex3_2
   key_tree */

#include <stdio.h>

int main(void){
  int N;
  //　入力の受け取り
  scanf("%d\n", &N);
  // 1の位を考えるので10で割った余りを用いる
  int mod = N % 10;
  //　あとは条件分岐
  if(mod == 3){
    printf("bon\n");
  }
  else if(mod == 0||mod == 1||mod == 6||mod == 8){
    printf("pon\n");
  }
  else{
    printf("hon");
  } 
  return 0;
    
  }