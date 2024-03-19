#include<stdio.h>
#include<string.h>

int main(void){
  char *s1 = "ABC";
  char *s2 = "ARC";
  char str[8];
  scanf("%s",str);
  if(strcmp(str,s1)==0){
    printf("ARC\n");
  }else{
    printf("ABC\n");
  }
  
  return 0;
}