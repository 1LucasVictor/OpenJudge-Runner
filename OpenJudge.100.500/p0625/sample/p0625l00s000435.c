#include<stdio.h>
#include<stdlib.h>

int main(void) {
  int a,b;
  scanf("%d %d",&a,&b);
  if (a > 8) {
    printf(":(");
  } else if (b > 8) {
    printf(":(");
  } else {
    printf("Yay!");
  }
  return 0;
}