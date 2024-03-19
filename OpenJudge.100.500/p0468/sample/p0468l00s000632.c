#include<stdio.h>

int main()
{
  char s[4];
  scanf("%s", s);
  
  if (s[1] == 'B') {
    puts("ARC\n");
  } else {
    puts("ABC\n");
  }
  
  return 0;
}