#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
  char s[100];
  scanf("%s",s);
  if(strcmp(s,"AAA")==0||strcmp(s,"BBB")==0){
    printf("No");
  }else{
    printf("Yes");
  }
  return 0;
}