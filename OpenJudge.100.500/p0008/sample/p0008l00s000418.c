#include <stdio.h>

int main(void)
{
  
  int  n,i,j,k;
  
  while ( scanf("%d", &n) != EOF ) { 
    
    j = 0;
    for ( k = 2; k <= n; k++)
      for (i = 2; i <= k; i++) {
	if ( k == i ) {
	  j++;
	  break;
	}
	if ( !( k % i ) )
	  break;
      }
    
    printf("%d\n", j);
    
  }
  

  return 0;
}