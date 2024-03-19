#include<stdio.h>

int main(void){
  int n, tmp;
  int i;
  int debt;

  debt = 100000;

  scanf("%d", &n);

  for (i = 0;i < n - 1;i++){
    debt *= 1.05;
  }

  debt /= 10000;
  debt *= 10000;
  debt += 10000;

  printf("%d\n", debt);

  return 0;
}
  