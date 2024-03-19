#include<stdio.h>

int main(void){
  int n, tmp;
  int i;
  int money;

  money = 100000;

  scanf("%d", &n);

  for (i = 0;i < n;i++){
    money *= 1.05;
    tmp = money / 1000;
    tmp = tmp * 1000;
    if ((money - tmp) != 0){
        money = tmp + 1000;
    }
  }

  printf("%d\n", money);

  return 0;
}
  