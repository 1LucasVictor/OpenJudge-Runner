#include <stdio.h>


int main(void) {

	// 1_7-D Matrix Multiplication

	int i,j,k;
	int n,m,l,wk;
	int ma[100][100];
	int mb[100][100];
	int mc[100][100];

	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&l);

	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			scanf("%d",&ma[i][j]);
		}
	}
	for(i=0; i<m; i++){
		for(j=0; j<l; j++){
			scanf("%d",&mb[i][j]);
		}
	}

	for(i=0; i<n; i++){
		for(j=0; j<l; j++){
			wk = 0;
			for(k=0; k<m; k++){
				wk += (ma[i][k] * mb[k][j]);
			}
			mc[i][j] = wk;
		}
	}

	for(i=0; i<n; i++){
		for(j=0; j<l; j++){
			printf("%d",mc[i][j]);
			if(j<(l-1)){
				putchar(' ');
			}else{
				putchar('\n');
			}
		}
	}
        return 0;
}