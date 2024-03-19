#include<stdio.h>
int main(){
  int x;
  scanf("%d", &x);
  int a = x / 500;
  int b = x % 500;
  int c = b / 5;
  printf("%d\n", a * 1000 + c * 5);
}
