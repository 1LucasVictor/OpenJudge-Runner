#include <stdio.h>
int main()
{
  char S[4];
  int i;
  
  for(i=0;i<4;i++){
    scanf("%s",&S[i]);
  }
  
  if(S[0]==S[1]&&S[1]==S[2])	printf("No");
  else	printf("Yes");
  
  return(0);
}