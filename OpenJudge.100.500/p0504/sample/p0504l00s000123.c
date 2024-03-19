#include <stdio.h>
 
int main(void) {
  int H, A;
  scanf("%d %d", &H, &A);
  int ans;
  if (H%A!=0) {
    ans = H / A + 1;
  }else {
    ans = H / A;
  }
  printf("%d", ans);
    return 0;
  }