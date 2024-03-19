#include<stdio.h>
#include<string.h>

int main(void){
  int i,ans=0;
  char S[20000],T[20000];
  scanf("%s",S);
  scanf("%s",T);
  for(i=0;i<20000;i++){
    if(S[i]==NULL)break;
    if(S[i]!=T[i])ans++;
  }
  printf("%d\n",ans);
  return 0;
}
