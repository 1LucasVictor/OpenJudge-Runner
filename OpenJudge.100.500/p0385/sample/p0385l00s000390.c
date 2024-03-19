#include <stdio.h>

int main(void) {
  int x,i,sum = 0;
  while(1){
    scanf("%d",&x);
    if(x == 0){
      break;
    }
    for(i = 0; i < 40; i++){
      sum += (x % 10);
      x = x / 10;
    }
    printf("%d\n",sum);
    sum = 0;
  }
  return 0;
}
