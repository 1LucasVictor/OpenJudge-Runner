#include <stdio.h>

int main(){
  int	A, B, C, K;
  
  scanf("%d %d %d %d", &A, &B, &C, &K);
  if	 ( K < A )	{ printf("%d",K); }
  else if( K > A+B ){ printf("%d", A-(K-(A+B))); }
  else				{ printf("%d",A); }
  return 0;
}