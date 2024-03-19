#include<stdio.h>

int main(){
  char s[3];
  scanf("%c", &s);
  
  if(s[1] == 'R'){
    printf("ABC\n");
  }else{
    printf("ARC\n");
  }
  return 0;
}
