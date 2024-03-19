#include <stdio.h>

int main(){
  char S[3];
  int i,sum=0;
  scanf("%s",S);
  for(i=0; i<3;i++){
    if(S[i]==49) sum+=1;
  }
  printf("%d\n",sum);
  return 0;


}
