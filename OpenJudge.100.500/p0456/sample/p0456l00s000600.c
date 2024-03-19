#include<stdio.h>
int main(void){
  int i;
  char s[1000000],t[1000000];
  scanf("%s %s",&s,&t);
  int a=0;
  for(i=0;s[i]!='\0';i++){if(s[i]!=t[i]){a++;}}
  printf("%d",a);
  return 0;
}
