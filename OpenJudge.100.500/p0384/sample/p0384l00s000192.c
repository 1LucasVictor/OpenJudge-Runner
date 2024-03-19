#include<stdio.h>
int main(void)
{
  char c;
  while((c = getchar ()) != '\n'){
    if((c >= 'A') && (c <= 'Z')){
      c += 'a' - 'A';
    }
    else if((c >= 'a') && (c <= 'z' )){
      c -= 'a' - 'A';
    }
    putchar(c);
  }
  printf("\n");
  return 0;
}