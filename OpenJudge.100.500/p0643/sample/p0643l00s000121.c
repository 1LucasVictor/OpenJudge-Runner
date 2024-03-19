#include<stdio.h>

int main() {
  int a, s, d, f;
  
  scanf("%d %d", &a, &s);
  
  d = a % 2;	f = s % 2;
  
  if(d != 0&&f != 0) {
    printf("Odd");
  }
  else {
    printf("Even");
  }
  return 0;
}
