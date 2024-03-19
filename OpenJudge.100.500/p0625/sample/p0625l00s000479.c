#include<stdio.h>

int main(void){

  int A , B;
  scanf("%d %d" , &A , &B);

  //余ったスペースがさの二倍より大きいか
  int sum = A + B;
  int sa = (A < B) ? B - A : A - B;

  if((2 * sa) <= (16 - sum)){
    puts("Yay!");
  }else{
    puts(":(");
  }

return 0;
}
