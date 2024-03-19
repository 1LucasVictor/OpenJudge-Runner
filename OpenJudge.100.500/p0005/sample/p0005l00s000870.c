#include<stdio.h>
#include<string.h>
int main(){
  char s[21];
  int i;
  scanf("%s",s);
  for(i=strlen(s);i;i--)printf("%c",s[i-1]);
  printf("\n");
  return 0;
}