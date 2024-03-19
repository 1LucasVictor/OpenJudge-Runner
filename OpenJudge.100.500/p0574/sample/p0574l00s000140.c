#include<stdio.h>
int main(){
  char str[5];
  scanf("%s",str);
  if(str[0] != str[1] && str[1] != str[2] && str[2] != str[3]){
    printf("Good\n");
  }else{
    printf("Bad\n");
  }
  return 0;
}