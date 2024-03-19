#include <stdio.h>

int main(){
  char s[10];
  scanf("%s",s);
  int flag = 0;
  for(int i=0;i<3;i++){
    if(s[i] == s[i+1]){
      printf("Bad\n");
      flag = 1;
      break;
    }
  }
  if(flag == 0) printf("Good\n");
  return 0;
}