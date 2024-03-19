#include <stdio.h>
int main(void) 
{
	int n, m, l, i, j, k;
	int A[100][100] = {0};
	int B[100][100] = {0};
	long C[200][200] = {0};
    
	scanf("%d %d %d", &n, &m, &l);
	for(i = 0; i < n; i++) {
            	for(j = 0; j < m; j++) {
            		scanf("%d", &A[i][j]);
            	}
            }
            
            for(i = 0; i < m; i++) {
            	for(j = 0; j < l; j++) {
            		scanf("%d", &B[i][j]);
            	}
            }
	
	for (i = 0; i < n; i++) {
    		for (j = 0; j < l; j++) {
        			for (k = 0; k < m; k++) {
            			C[i][j] += A[i][k] * B[k][j];
        			}
		}
	}
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < l; j++) {
			if (j == 0) {
				printf("%ld", C[i][j]);
			}
			else {
				printf(" %ld", C[i][j]);
			}
		}
		putchar('\n');
	}
	return 0;
}

