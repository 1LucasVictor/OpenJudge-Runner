#include <stdio.h>
#include <string.h>

int main(void){
  int a=0, b=0;
  char s[200000], t[200000];

  scanf("%s", s);
  scanf("%s", t);
  for(int i=0; i<strlen(s); i++){
    if(s[i]!=t[i])
      a++;
    if(t[i]!=s[i])
      b++;}
  printf("%d\n", a<=b?a:b);
  
return 0;}
