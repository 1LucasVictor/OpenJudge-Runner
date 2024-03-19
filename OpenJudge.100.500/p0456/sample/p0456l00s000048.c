#include<stdio.h>

int main(void){
  char s[200000],t[200000];
  int cor=0;
  if(scanf("%s %s",s,t)==1){};
  for(int i=0; s[i]!='\0'; i++){
    if(s[i]!=t[i]){
      cor++;
    }
  }
  printf("%d",cor);
  return 0;
}
