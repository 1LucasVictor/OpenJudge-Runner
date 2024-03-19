#include<stdio.h>
#define PIACE 16
int main() {
  int a, b;
  scanf("%d", &a);
  scanf("%d", &b);
  if (a > PIACE / 2){
    printf(":(\n");
    return 0;
  } else if (b > PIACE / 2) {
    printf(":(\n");
    return 0;
  }
  printf("Yay!\n");
  return 0;
}