#include<stdio.h>
int main()
  {
  char s[4];
  scanf("%s",s);
  if(s[0] == 'A' && s[1] == 'B' && s[2] == 'C'){
    printf("ARC\n");
    }
  else printf("ABC\n");
  }