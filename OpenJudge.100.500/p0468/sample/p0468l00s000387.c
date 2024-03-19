#include<stdio.h>
#include<string.h>
 
int main(void){
  char *a[4]; 
  scanf("%s",&a);
  if(strcmp(a,"ARC") == 0){
    printf("ABC\n");
  }else{
    printf("ARC\n");
  }
  return 0;
}