#include<stdio.h>

int main(void){
  int i, sum, tom;
  int t[4];
  scanf("%d%d%d%d", &t[0], &t[1], &t[2], &t[3]);
  sum = t[2] - t[1];
  if(sum > 0){
    printf("0\n");
  }
  else{
    tom = t[1] - t[3];
    if(tom < 1){
      printf("%d", sum*-1);
    }
    else{
      printf("%d", (sum+tom)*-1);
    }
  }

  return 0;
}
