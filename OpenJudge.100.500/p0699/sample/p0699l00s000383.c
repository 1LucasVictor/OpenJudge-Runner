#include <stdio.h>

int main(){
  int S[4];
  int N,M;
  scanf("%d %d %d",S,S+1,S+2);
  for(int i=0;i<3;i++)
    if(S[i]==5)
      N++;
    else
      M++;
  if(N==2 && M==1)
    printf("YES\n");
  else
    printf("NO\n");
  
  return 0;
}