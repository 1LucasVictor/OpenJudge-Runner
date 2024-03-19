#include<stdio.h>
#include<string.h>
 
int main(void){
 
  int i;
 
  /* 文字列 */
  char str[1200];
 
  /* 英数字を入力 */
  scanf(" %[^\n]", str);
       
  
  /* アルファベットの小文字を大文字に変換 */
  for(i=0;i<1200;i++){
    /* アルファベットの小文字なら変換 */
    if(str[i]>=97&&str[i]<=122)
      str[i]=str[i]-32;
    else if(str[i] >= 65 && str[i] <= 90)
      str[i]=str[i]+32;
  }
  /* 変換した文字列を出力 */
  printf("%s\n", str);
 
  return 0;
}


