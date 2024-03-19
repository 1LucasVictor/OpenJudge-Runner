#include<stdio.h>
int main(void){

  //変数の受け取り
  int A, B;
  scanf("%d%d", &A, &B);
  
  //AとBが1以上9以下だったら計算
  if(1 <= A && A <= 9 && 1 <= B && B <= 9){
  	printf("%d\n", A*B);
  }else{
  	printf("-1\n");
  }
  
  return 0;
}  