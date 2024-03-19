#include <stdio.h>
int main() {
  char c;
  while(1){
    scanf("%c", &c);
    if(c=='\n'){
      printf("\n");
      break;
    }
    if('a'<=c&&c<='z'){
      printf("%c", c - ('a' - 'A'));
    }else if('A'<=c&&c<='Z'){
      printf("%c", c + ('a' - 'A'));
    }else{
      printf("%c",c);
    }
  }
  return 0;
}
