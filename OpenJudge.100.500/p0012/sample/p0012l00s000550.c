#include <stdio.h>

int main(){
  int train[10];
  int num, i = 0;
  while(scanf("%d", &num) != EOF){
    if(num == 0){
      i--;
      printf("%d\n", train[i]);
    }else if(1 <= num && num <= 10){
      train[i] = num;
      i++;
    }
  }
  return 0;
}