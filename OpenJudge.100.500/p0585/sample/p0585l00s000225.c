#include<stdio.h>

int main(void){
  int a, b, c;
  int sum = 0;
  
  scanf("%d %d %d", &a, &b, &c);
  
  for(;c >= a;c -= a){
    sum += b;
  }
  printf("%d\n", sum);
  return 0;
}