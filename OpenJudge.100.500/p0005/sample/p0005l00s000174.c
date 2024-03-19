#include <stdio.h>
#include <string.h>

int main(void){
  char str[21];
  int i;

  fgets(str,21,stdin);
  for(i=strlen(str)-1;i>=0;i--)
    printf("%c",str[i]);
  printf("\n");

  return 0;
}