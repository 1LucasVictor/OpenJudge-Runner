#include <stdio.h>
int main() {
  int a,b,c,dd,e,k;
  scanf("%d %d %d %d %d %d",&a,&b,&c,&dd,&e,&k);
  if (e - a > k) {
    printf(":(\n");
  } else {
    printf("Yay!\n");
  }
  return 0;
}