#include<stdio.h>

int main(int a){
  char buff[99];
  int n;
  fgets(buff,99,stdin);
  for(n = strlen(buff)-1; n; ) putchar(buff[--n]);
  puts("");
  return 0;
}