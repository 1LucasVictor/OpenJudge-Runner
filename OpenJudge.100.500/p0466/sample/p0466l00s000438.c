#include<stdio.h>
int main(void){
  char S[11],T[12];
  int i=0;
  
  scanf("%s",S);
  scanf("%s",T);
  
  while(S[i] != '\0'){
    if(S[i]!=T[i]){
      printf("No");
      return 0;
    }
    i++;
  }
  printf("Yes");
  return 0;
}
