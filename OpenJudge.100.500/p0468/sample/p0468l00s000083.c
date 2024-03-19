#include<stdio.h>
signed main(){
  char S[10];
  int i;
  for(i=0;i<3;i++){
  scanf("%s",&S[i]);
  }
  if(S[1]=='B'){
    printf("ARC\n");
  }else{
    printf("ABC\n");
  }
  return(0);
}