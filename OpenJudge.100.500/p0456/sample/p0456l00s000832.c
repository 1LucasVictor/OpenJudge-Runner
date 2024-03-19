#include<stdio.h>
#include<string.h>

int main(void){

  char S[200001],T[200000];
  int i,ans = 0;

  scanf("%s",S);
  scanf("%s",T);

  for(i = 0;i < strlen(S);i++){
    if(S[i] != T[i]) ans++;
  }

  printf("%d\n",ans);
  return 0;
}
