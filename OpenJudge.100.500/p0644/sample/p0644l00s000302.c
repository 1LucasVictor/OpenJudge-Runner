#include<stdio.h>

int main(){
  int sum;
  char s[3];
  
  scanf("%s", s);
  
  if(s[1] == '1')
    sum = sum + 1;
  if(s[2] == '1')
    sum = sum + 1;
  if(s[0] == '1')
    sum = sum + 1;
  
  printf("%d", sum);
  
  return 0;
}