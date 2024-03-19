#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
  int N, A, B, C, D, result;
  int i;
  scanf ("%d", &N);
  
  result = 0;
  for (i=1;i<10;i++) {
  	if (N%i==0) {
  		if (N/i<10) result = 1;
  	}
  }
  
  
  printf("%s", result?"Yes":"No");
  return 0;
}


