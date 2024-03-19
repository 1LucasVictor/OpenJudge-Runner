#include <stdio.h>
int main () {
  int a;
  scanf("%d",&a);
  if (a/100!=7) {
    a=a%100;
    if (a/10!=7) {
      a=a%10;
      if (a!=7) {
        printf("No");
        return 0;
      }
    }
  }
  printf("Yes");
}
      