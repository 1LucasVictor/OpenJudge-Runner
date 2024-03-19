#include <stdio.h>
#include <string.h>

int main(void){
  int i,j;
  char str[21];
  int len;



  scanf("%s" ,str);
  len = strlen(str);
  for(i = 0; i < len ;i++){
    printf("%c" ,str[len - i - 1]);   
  }
  printf("\n");

  return 0;
}