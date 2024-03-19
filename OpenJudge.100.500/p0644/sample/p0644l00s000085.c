#include<stdio.h>

int main(void){
  char s[3];
  int count = 0;
  scanf("%s", &s);
  if(s[0] == '1'){
    count += 1;
  }
  if(s[1] == '1'){
    count += 1;
  }
  if(s[2] == '1'){
    count += 1;
  }
  printf("%d", count);
  return 0;
}