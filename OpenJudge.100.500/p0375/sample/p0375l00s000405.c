#include <stdio.h>

int main(void) {
  
  int x, n, k, j;
  scanf("%d", &n);
  for(k = 1; k <= n; k++) {
    j = k;
  int  fg = 0;
    while(j > 0) {
      if(j % 10 == 3) {
	fg = 1;
	break;
      }
      j/=10;
}

    if(k % 3 == 0 || fg == 1) {
      printf(" %d",k); 
    }  else {
    }
  }
  printf("\n");
  return 0;
}