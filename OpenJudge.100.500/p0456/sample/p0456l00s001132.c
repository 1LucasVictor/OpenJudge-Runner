#include <stdio.h>

int main() {
  char S[200000];
  char T[200000];
  int i=0;
  int count=0;
  scanf("%s",S);
  scanf("%s",T);
  for(i=0;S[i]!='\0';i++){
    if(S[i]!=T[i]){
      S[i]=T[i];
      count++;
    }
  }
  printf("%d",count);
  return 0;
}