#include <stdio.h>

int main(void){
  int length;
  char string[22];
  for(int i = 0; i < 21; i++){
    string[i] = getchar();
    if(string[i] == '\n'){
      length = i;
      break;
    }
  }
  for(int i = length - 1; i >= 0; i--)putchar(string[i]);
  printf("\n");
  return 0;
}
