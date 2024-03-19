/*
  大文字と小文字に入れ替え
  (与えられた文字列の小文字と大文字を入れ替えるプログラム)
  2018/02/13
*/

#include<stdio.h>
int main(void){
  char str[1200];
  int i=0;
  while(1){
    scanf("%c",&str[i]);
    if(str[i] == '\n')
      break;
    if('A' <= str[i] && str[i] <= 'Z'){
      str[i] += 32;
    }
    else{
      if('a' <= str[i] && 'z'>= str[i]){
	str[i] = str[i] - 32;
      }
    }
    printf("%c",str[i]);
    i++;
  }
  printf("\n");
  return 0;
}
