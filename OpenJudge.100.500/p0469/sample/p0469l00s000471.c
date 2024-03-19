#include<stdio.h>

int main(void) {
  int k, a, b;
  scanf("%d", &k);
  scanf("%d %d", &a, &b);
  if(a%k == 0||k-a%k <= b-a) {
    printf("OK\n");
  }
  else {
    printf("NG\n");
  }
  return 0;
}
