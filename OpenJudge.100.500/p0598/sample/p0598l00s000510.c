#include<stdio.h>

int main(){
  int a;
  int b;
  
  scanf("%d %d", &a, &b);
  
  if(b % a == 0){
    printf("%d", a + b);
  } else {
    printf("%d", b - a);
  }
  return 0;
}