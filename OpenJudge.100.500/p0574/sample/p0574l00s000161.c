#include<stdio.h>

int main(){
  int i;
  char s[4];
  scanf("%s",s);
  for(i=1;i<4;i++){
    if(s[i-1]==s[i]){
      printf("Bad\n");
      return 0;
    }
  }
  printf("Good\n");
  return 0;
}