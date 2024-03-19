#include <stdio.h>
int main(void){
 int i,x=0;
  char s[40],t[40];
  
  scanf("%s",&s);
  scanf("%s",&t);
  
  for(i=0;s[i]!='\0';i++){
    if(s[i]!=t[i])x++;
  }
  printf("%d",x);
  return 0;
}