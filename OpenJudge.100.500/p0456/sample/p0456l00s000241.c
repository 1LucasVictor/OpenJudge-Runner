#include<stdio.h>
#include<string.h>
int main(){
  char S[256],T[256];
  int ret;
  ret=scanf("%s",S);
  ret=scanf("%s",T);
  int n=strlen(S);
  int i;
  int ans=0;
  for(i=0;i<n;i++){
    if(S[i]!=T[i]){
      ans++;
    }
  }
  printf("%d",ans);
  return 0;
}