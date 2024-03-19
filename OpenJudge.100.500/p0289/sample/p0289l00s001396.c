#include<stdio.h>

int main(){
  int a, b, tmp;

  scanf("%d %d", &a, &b);

  while(b != 0){
    tmp = a;
    a = b;
    b =  tmp % b;
  }
  printf("%d\n", a);

  return 0;
}