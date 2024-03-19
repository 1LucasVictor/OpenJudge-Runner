#include <stdio.h>
signed main(){
  char S[100000],T[1000000],i;
  int sum;
  scanf("%s",S);
  scanf("%s",T);
  for(i=0;i<S;i++){
    if(S[i] != T[i]){
      sum+=1;
    } 
  }
  printf("%d\n",sum);
  return(0);
}