#include<stdio.h>
#include<stdlib.h>
int main(void){
  char S[4];
  scanf("%s %s %s %s",&S[0],&S[1],&S[2],&S[3]);
if((S[0]==S[1] && S[2]==S[3]) ||(S[0]==S[2] &&S[1]==S[3]) ||(S[0]==S[3] && S[1]==S[2])){
  if(S[0]==S[1] && S[1]==S[2]&&S[2]==S[3]){
    printf("No");
  }
  else{
    printf("Yes");
  }
}
  else{
    printf("No");
  }
  return 0;
}