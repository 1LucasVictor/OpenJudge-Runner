#include <stdio.h>

int main(void) {
  int N;
  scanf("%d", &N);
  int shou1;
  int amari;
  int shou2;
  shou1 = N / 100;
  amari = N % 100;
  shou2 = amari / 10;
  amari = amari % 10;
  if (shou1 == 7 || shou2 == 7 || amari == 7) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  return 0;
}