#include <stdio.h>
#include <string.h>

int main(void){
  char str[21];
  int i;
  scanf("%20[a-zA-Z0-9]\n",str);
  i = strlen(str);
  while(i--){
    printf("%c", str[i]);
  }
  printf("\n");
  return 0;
}