#include <stdio.h>
#include <stdlib.h>

int main(){
  char str[100];
  scanf("%s", str);

  char arc[100], abc[100];
  sprintf(arc, "ARC");
  sprintf(abc, "ABC");

  if(str[1] == arc[1]) printf("%s\n", abc);
  else printf("%s\n", arc);

  return 0;
}