/* ex3_4
   key_tree */
#include<stdio.h>

int main(void){
  int N;
  scanf("%d", &N);
  
  // 9*9より大きいものはNo
  if(N > 81){
    printf("No");
  }
  // 11*11>100なので1桁の素数で割り切れなければ九九で表せない
  else if(N % 2 == 0||N % 3 == 0||N % 5 == 0||N % 7 == 0){
    printf("Yes");
  }
  else{
    printf("No");
  }
  return 0;
  
}