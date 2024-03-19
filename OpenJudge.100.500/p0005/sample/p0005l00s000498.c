#include<stdio.h>
int main(){

  char s[22];
  int i=0;
  fgets(s,20,stdin);

  while(s[i]!=0)i++;
  i--;
  for(;i>=0;i--){
    printf("%c",s[i]);
  }
  printf("\n");
  return 0;
}