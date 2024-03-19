#include <stdio.h>

int main(){
  char s[4];
  for(int i=0;i<4;i++){
    scanf("%c",&s[i]);
  }
  int code = 0;
  for(int j=0;j<3;j++){
    if(s[j+1] == s[j]){
      code = 1;
    }
  }
  if(code == 1){
    printf("Bad\n");
  }else{
    printf("Good\n");
  }
  return 0;
}