#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    char *a="ARC";
    scanf("%s",str);
  if(strncmp(a,str,3)==0)
  printf("ABC");
  else printf("ARC");
  return 0;
}
