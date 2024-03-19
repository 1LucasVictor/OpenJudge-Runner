#include <stdio.h>
#include <string.h>

int min(int a,int b){
  if(a < b){
    return a;
  }
  return b;
}

int main(void){
  char S[100000];
  scanf("%s",S);

  int cnt = 0;
  for(int i = 0;i < strlen(S);i++){
    if(S[i] == '1') cnt++;
  }
  
  printf("%d\n",min(cnt,strlen(S)-cnt)*2);
 
  return 0;
}