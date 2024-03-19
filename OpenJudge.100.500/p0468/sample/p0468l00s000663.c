#include <stdio.h>
#include <string.h>

#define MAX 1000

int main() {
  char s[MAX];
  
  scanf("%s",s);
  
  if(strcmp(s,"ABC")==0)
    printf("ARC\n");
  else
    printf("ABC\n");
  
  return 0;
}
