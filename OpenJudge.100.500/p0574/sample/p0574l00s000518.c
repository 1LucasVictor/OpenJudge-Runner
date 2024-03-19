#include<stdio.h>
 
int main(void){
  char S[5];
  scanf("%s",S);
  for(int i=0;i<3;i++){
    if(S[i]==S[i+1]){
      printf("Bad");
      break;
    }else if(i==2){
      printf("Good");
    }
  }
  return 0;
}