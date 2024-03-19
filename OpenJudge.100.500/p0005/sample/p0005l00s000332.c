#include <stdio.h>

int length (char* s)
{
  int i=0;
  while (*s++ != '\0') {
    i++;
  }
  return i;
}


int main (int argc, char* argv[])
{
  int i;
  char s[21];

  scanf("%s", s);
  for (i=length(s)-1; 0<=i; i--) {
    printf("%c", s[i]);
  }
  printf("\n");

  return 0;
}