#include<stdio.h>
 
int main(void){
  char s[30];
  scanf("%s",s);
  if(s[1]=='B'){
    printf("ARC\n");
  }else{
    printf("ABC\n");
  }
  return 0;
}