#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  int count = 0;
  char buf[32] = { 0 };
  char *pbuf = buf;
  
  //数字読み込み
  fgets(buf, sizeof(buf), stdin);
  for(int i = 0; i < 3; i++, pbuf++){
    if(*pbuf == '1') count++;
  }
  printf("%d\n", count);
  return 0;
}