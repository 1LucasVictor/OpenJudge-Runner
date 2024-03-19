#include <stdio.h>
#include <string.h>

int main(){
  char S[200002],T[200002];
  int N,c=0;;
  scanf("%s\n%s",S,T);
  N=strlen(S);
  for(int i=0;i<N;i++){
    if(S[i]!=T[i]) c++;
  }
  printf("%d\n",c);
  return 0;
}