#include <stdio.h>

int main(void){
  int i,ans=0;
  char S[200001],T[200001];
  scanf("%s",S);
  scanf("%s",T);

  for(i=0;S[i]!='\0';i++){
    if(S[i] != T[i]) ans++;
  }
  
  printf("%d",ans);
  
  return 0;
}