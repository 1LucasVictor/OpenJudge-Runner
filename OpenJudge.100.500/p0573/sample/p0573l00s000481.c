#include <stdio.h>
int main(void){

  char	S[4+1];
  int	x = 0;
  int	y = 0;
  int	z = 0;
  
  scanf("%4s", S);
  
  if(S[0]==S[1]){ x++; }
  if(S[0]==S[2]){ x++; }
  if(S[0]==S[3]){ x++; }
  
  if(S[1]==S[2]){ y++; }
  if(S[1]==S[3]){ y++; }
  
  if(S[2]==S[3]){ z++; }
  
  if( (x+y+z) == 2 ){ printf("Yes"); }
  else				{ printf("No");  }
  
  return 0;
}