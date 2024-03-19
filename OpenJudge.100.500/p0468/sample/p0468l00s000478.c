#include <stdio.h>
#include <string.h>
int main(){
  char a[10];
  scanf("%s",a);
  
  if(strcmp(a,"ARC")==0)
    printf("ABC");
  if(strcmp(a,"ABC")==0)
    printf("ARC");
  return 0;
}