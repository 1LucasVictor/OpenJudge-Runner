#include<stdio.h>
int main(void){
  char str[3];
  scanf("%s", &str);
  if(str[0]=='A' && str[1]=='B' && str[2]=='C'){
    printf("ARC");
  }
  else{
    printf("ABC");
  }
  return 0;
}
