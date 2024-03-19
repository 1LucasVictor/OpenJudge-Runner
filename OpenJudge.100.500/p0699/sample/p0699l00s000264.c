#include<stdio.h>
int main(){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if ((a + b + c) == 17) {
    if ((a + b) ==12 || (b + c) == 12) {
      printf("YES");
    } else {
      printf("NO");
    }
  } else {
    printf("NO");
  }
  return 0;
}