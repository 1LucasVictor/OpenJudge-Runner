#include<stdio.h>

int main(){
  char S[5];
  scanf("%s",S);
  int i;
  for(i=0;i<3;i++){
    if(S[i] == S[i+1]){
      puts("Bad");
      return 0;
    }
  }
  puts("Good");
  return 0;
}