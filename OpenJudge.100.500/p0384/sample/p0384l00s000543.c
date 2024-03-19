#include <stdio.h>
int main(void){
  char ch, C;
  for(;;){
  scanf("%c",&ch);
  if(ch == '\n'){
      break;
  }
  else if(ch == ' '){
      printf(" ");
  }
  else if('!' <= ch && ch <= '/'){
      printf("%c",ch);
  }
  else if('A' <= ch && ch <= 'Z'){
      C = ch + 32;
      printf("%c",C);
  }
  else if('a' <= ch && ch <= 'z'){
      C = ch - 32;
      printf("%c",C);
  }
  }
  printf("\n");
  return 0;
}
