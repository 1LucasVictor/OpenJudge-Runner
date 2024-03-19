#include<stdio.h>
 
int main(int argc, char* argv[])
{
  char c;
  while((c = getchar()) != '\n'){
    if(('a' <= c && c <= 'z')||('A' <= c && c <= 'Z')){
      if('a' <= c && c <= 'z'){
        putchar('A' + (c - 'a'));
      }else{
        putchar('a' + (c - 'A'));
      }
    }else{
       putchar(c);
    }
  }
  putchar('\n');
  return(0);
}