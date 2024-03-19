#include <stdio.h>
#include <string.h>
int main(void){
  char str[21];
  int n;
  scanf("%s\n",str);
  n=strlen(str); n--;
  while(n>=0){
    printf("%c",str[n]);
    n--;
  }
  printf("\n");
  return 0;
}