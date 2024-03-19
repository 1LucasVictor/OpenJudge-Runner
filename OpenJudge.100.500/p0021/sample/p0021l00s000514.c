#include <stdio.h>

int main(void)
{
  int n;
  int seq[5001], max;
  int buf;
  int i, j;
  
  while (1) {
    scanf("%d", &n); if ( n == 0 ) break;
    for ( i = 0; i < n; i++ ) {
      scanf("%d", &seq[i]);
    }

    max = seq[0];
    for ( i = 0; i < n; i++ ) {
      buf = 0;
      for ( j = i; j < n ; j++) {
	  buf += seq[j];
	  if ( buf > max ) max = buf; 
      }
    }
    
    printf("%d\n", max);
  }
    
  return 0;
}