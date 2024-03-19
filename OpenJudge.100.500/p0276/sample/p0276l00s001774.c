#include <stdio.h>
#define nord 100
int main() { 
   int A[nord][nord];
   int n, vi, vj, k;
   int i, j;

   scanf("%d", &n);

   for (i = 0; i < n; ++i) {
	  for (j = 0; j < n; ++j) {
		 A[i][j] = 0;
	  }
   }

   for (i = 0; i < n; ++i) {
	  scanf("%d", &vi);
	  scanf("%d", &k);
	  j = 0;
	  while (j < k) {
		 scanf("%d", &vj);
		 A[vi - 1][vj - 1] = 1;	
		 ++j;
	  }
   }

   for (i = 0; i < n; ++i) {
	  for (j = 0; j < n; ++j) {
		 printf("%d", A[i][j]);
		 if (j != n - 1)
			putchar(' ');
	  }
	  putchar('\n');
   }
   return 0;
}