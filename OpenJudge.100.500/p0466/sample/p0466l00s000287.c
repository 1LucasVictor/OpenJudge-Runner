#include<stdio.h>
#include<string.h>

int main(){
  int c=0;
  char S[12],T[12];
  int L;
  int i;
  scanf("%s\n",S);
  scanf("%s\n",T);
  L=strlen(S);
  
  for(i=0;i<L;i++){
    if(S[i]!=T[i]){
      c=1;
      break;
    }
  }
  if(c==0)
    printf("Yes\n");
  else
    printf("No\n");
  return 0;
}