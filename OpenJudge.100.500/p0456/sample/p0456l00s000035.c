#include <stdio.h>

int main() {
  char S[200001]={0};
  char T[200001]={0};
  int i=0;
  int count=0;
  scanf("%s",S);
  scanf("%s",T);
  for(i=0;S[i]!='\0';i++){
    if(S[i]!=T[i]){
      count++;
    }
  }
  printf("%d",count);
  return 0;
}
