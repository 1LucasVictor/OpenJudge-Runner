#include <stdio.h>
#include <string.h>
int main(void){
  char S[200001];
  char T[200001];
  int i=0;
  int s=0;
  scanf("%s",S);
  scanf("%s",T);
  while(S[i]!='\0'){
    if(S[i]!=T[i]){
      s=s+1;
    }
    i++;
  }
  printf("%d\n",s);
  return 0;
}