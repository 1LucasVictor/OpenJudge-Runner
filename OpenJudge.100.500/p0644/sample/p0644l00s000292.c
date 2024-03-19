#include<stdio.h>

int main(void){
  char s[3];
  int i,c=0;
  scanf("%s",s);
  for(i=0;i<3;i++) c += s[i]=='1' ? 1: 0 ;
  
  printf("%d\n",c);
  
  return 0;
}