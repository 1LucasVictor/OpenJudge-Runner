#include<stdio.h>
#include<string.h>

int main(void){
  char last[4];
  
  scanf("%s", last);
  char ABC[] = "ABC";
  
  if(strcmp(last,ABC) == 0){
    printf("ARC\n");
    return 0;
  }
  
  printf("ABC\n");
  return 0;
}