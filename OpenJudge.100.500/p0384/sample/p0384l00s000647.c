#include<stdio.h>

char exchange(char c) {
  if('A' <= c && c <= 'Z') {
    return c + ('a' - 'A');
  }
  else if('a' <= c && c <= 'z') {
    return c + ('A' - 'a');
  }
  else return c;
}

int main(void){
    int len;
  char s[4096];  /* 1200バイト以上 */
  scanf("%[^\n]", s);// セキュリティ上よろしくないけど仕方がない
  len = strlen(s);   // 文字列の長さをえる
  for(int i = 0; i < len;i++) {
    s[i] = exchange(s[i]);
  }
  printf("%s\n",s);

}

