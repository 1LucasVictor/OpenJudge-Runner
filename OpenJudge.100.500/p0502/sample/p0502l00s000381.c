#include <stdio.h>

int main(void){

  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  int flag = 1;
  for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 0) {
      if (a[i] % 3 != 0 && a[i] % 5 != 0) {
        flag = 0;
        break;
      }
    }
  }

  if (flag == 1) {
    printf("APPROVED\n");
  } else {
    printf("DENIED\n");
  }

  return 0;
}