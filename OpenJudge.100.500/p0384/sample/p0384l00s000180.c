//ITP1-8-A: Toggling Cases
//2019.05.18

#include <stdio.h>

//関数宣言
char tolowr(char c); //大文字 -> 小文字
char toupr(char c);  //小文字 -> 大文字

int main(void)
{
  char c;
  do {
    scanf("%c", &c);
    if ((c >= 'A') && (c <= 'Z')) {
      c = tolowr(c);
    }else if ((c >= 'a') && (c <= 'z')){
      c = toupr(c);
    }else{}
    printf("%c", c);
  } while(c != '\n');
  //printf("\n");
  return 0;
}


//関数定義
char tolowr(char c) {
  return (c + 0x20);
}

char toupr(char c) {
  return (c - 0x20);
}

