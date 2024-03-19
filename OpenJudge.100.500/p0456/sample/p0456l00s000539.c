#include <stdio.h>
#include <string.h>

int main(void){
  int a=0;
  char s[2000000], t[2000000];

  scanf("%s", s);
  scanf("%s", t);
  for(int i=0; i<strlen(s); i++)
    if(s[i]!=t[i])
      a++;
  printf("%d\n", a);
  
return 0;}
