#include <stdio.h>
int main(void){
  int min=0,i=0;
  int N[2];
  char S[10000];
  scanf("%s",S);
   N[0]=N[1]=0;
    /* S中の0の数をN[0]に、1の数をN[1]に格納 */
    while(S[i]){
    if(S[i]==49)
    N[1]++;
    if(S[i]==48)
    N[0]++;
    
    i++;
    }
  
  if(N[1]>N[0])
  min=N[0];
  else
  min=N[1];
  
  printf("%d",2*min);
  return(0);
}