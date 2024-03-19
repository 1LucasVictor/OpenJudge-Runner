#include <stdio.h>

int main (void){
  
  char S[10];
  
  scanf("%s", S);
  
  int a = S[0] - '0';
  int b = S[1] - '0';
  int c = S[2] - '0';
  
  int sum = a+b+c;
  
  printf("%d", sum);
  
  return 0;
}