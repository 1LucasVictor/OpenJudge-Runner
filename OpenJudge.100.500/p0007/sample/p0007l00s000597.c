#include <stdio.h>

int main()
{
    int i, j, k, l;
    int n;
    int count = 0;
    
    while (scanf("%d", &n) != EOF) {
        count = 0;
	if (n <= 36) {
	  for (i = 0; i < 10; i++) {
	    if (i > n) break;
            for (j = 0; j < 10; j++) {
	      if (i + j > n) break;
	      for (k = 0; k < 10; k++) {
		if (i + j + k > n) break;
		for (l = 0; l < 10; l++) {
		  if (i+j+k+l == n) {
		    count++;
		    break;
		  }
		}
	      }
            }
	  }
	}
        printf("%d\n", count);
    }
    
    return 0;
}
                

