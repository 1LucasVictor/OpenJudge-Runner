#include <stdio.h>

int main(){
  char c;
  int i;

  c=getchar();
  while(c!='\n'){
    if((int)c>=97&&c<=122)
      printf("%c",(int)c-32);
    else if((int)c>=65&&c<=90)
      printf("%c",c+32);
    else
      putchar(c);
    c=getchar();
  }
  puts("");
  return 0;
}