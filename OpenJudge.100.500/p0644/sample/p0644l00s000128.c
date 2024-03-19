#include <stdio.h>

int main(void){
  int count = 0;
  int n = 0;
  char s[3];
  scanf("%s", &s);
  while (n < 3){
    if(s[n] == '1'){
      count = count + 1;
    }
    n = n + 1;
  }
  printf("%d",count);
  return 0;
}