#include<stdio.h>
#include<string.h>

int main (void){
  char t[5];

  scanf("%s",t);

  if(strcmp(t,"AAA") == 0 || strcmp(t,"BBB") == 0){
    printf("No\n");
  }else{
    printf("Yes\n");
  }
  return 0;
}