#include <stdio.h>

int main(void) {
	int n,m,i,j;
	
	
	scanf("%d",&n);
	scanf("%d",&m);
	
	int A[n][m],b[m],ans[n];
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&A[i][j]);

		}

	}
	
	for(i=0;i<m;i++){		
			scanf("%d",&b[i]);
		
	}

	
	for(i=0;i<n;i++){
		ans[i] = 0;
		for(j=0;j<m;j++){

			ans[i] += b[j] * A[i][j];
		}
	}
	
	for(i=0;i<n;i++){	
	
			printf("%d\n",ans[i]);
	}
	return 0;
}