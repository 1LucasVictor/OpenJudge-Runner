#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  char str[50];
  int str_len;
  scanf("%s", str);
  str_len = strlen(str);

  int i;
  for(i=0; i<str_len; i++){
    printf("%c", str[str_len-i-1]);
  }
  printf("\n");
  return 0;
}