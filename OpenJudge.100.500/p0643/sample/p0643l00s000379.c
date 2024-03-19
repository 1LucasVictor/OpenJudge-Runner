#include <stdio.h>

void judgeOddEven(){
  int a, b;
  scanf("%d %d", &a, &b);
  if((a*b)%2 == 0){
    printf("Even");
  }else{
    printf("Odd");
  }
}

int main(){
  judgeOddEven();
  return 0;
}
