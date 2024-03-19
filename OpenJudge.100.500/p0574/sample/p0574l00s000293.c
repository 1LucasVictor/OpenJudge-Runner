#include <stdio.h>
#include <string.h>

int main(){
  char S[4];
  int flag = 0;
  scanf("%s",S);
  for(int i = 0; i < 3; i ++){
    if(S[i] == S[i+1]){
      flag = 1;
    }
  }
  if(flag){
    printf("%s\n","Bad");
  }else{
    printf("%s\n","Good");
  }
  return 0;
}
