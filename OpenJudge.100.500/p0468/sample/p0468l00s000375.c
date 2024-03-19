#include <stdio.h>
#include <string.h>

int main(){
  char input[4];
  
  scanf("%s",input);
  
  if(strcmp(input,"ABC")==0){
    printf("ARC");
  } else {
    printf("ABC");
  }
}