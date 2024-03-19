#include <stdio.h>

int main(void) {
  int a[100];
  int n;
  int bool = 0;
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for(int i = 0; i < n; i++) {
    if(a[i] % 2 == 0) {
      if(a[i] % 3 == 0 || a[i] % 5 == 0) {
        bool = 1;
      }
    }
  }
  if(bool > 0) {
    printf("APPROVED");
  } else {
    printf("DENIED");
  }
  return 0;
}
