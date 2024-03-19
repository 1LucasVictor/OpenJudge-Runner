#include<stdio.h>

int main(void) {
  char S[2000000];
  char T[2000000];
  int i, j;
  int num = 0;
  
  scanf("%s", S);
  scanf("%s", T);
  for(i=0; S[i]!='\0'; ++i);
  for(j = 0; j <= i; j++){
    if(S[j] != T[j]){
      num++;
    }
  }  
  printf("%d", num);
  return 0;
}