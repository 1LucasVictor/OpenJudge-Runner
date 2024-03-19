#include <stdio.h>

int main(){
  char S[2*10*10*10*10*10+1];
  char T[2*10*10*10*10*10+1];
  int count = 0;
  int i=0;
  
  scanf("%s %s",S,T);
  
  while(S[i] != '\0'){
    if(S[i] != T[i]) count++;
    i++;
  }
  
  printf("%d\n",count);
  
  return 0;
  
}