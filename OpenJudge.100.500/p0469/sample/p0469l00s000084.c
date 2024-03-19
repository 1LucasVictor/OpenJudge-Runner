#include <stdio.h>

int main(void) {
  int k;
  int a, b;
  int judge = 0;
  scanf("%d", &k);
  scanf("%d%d", &a, &b);
  for(int i = a; i <= b; i++) {
    if(i % k == 0) {
      judge = 1;
    }
  }
  if(judge == 1) {
    printf("OK");
  } else {
    printf("NG");
  }
  return 0;
}
