#include<stdio.h>
int main(){
  char s[4];
  scanf("%s",s);
  printf("%d",s[0]+s[1]+s[2]-'0'*3);
}
