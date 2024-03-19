#include<stdio.h>

int main()
{
  int a, b, c, box;
  scanf("%d %d %d", &a, &b, &c);
  while(1){
    if (a > b) {
      box = a;
      a = b;
      b = box;
    } else if (b > c) {
      box = b;
      b = c;
      c = box;
    } else if (a > c) {
      box = c;
      c = a;
      a = box;
    } if (a < b && b < c) {
      break;
    }
  }
  printf("%d %d %d\n", a, b, c);
}