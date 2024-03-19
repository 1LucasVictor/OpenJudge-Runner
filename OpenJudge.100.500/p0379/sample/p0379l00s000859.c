#include <stdio.h>

int main(){
	
	int A[100][100], B[100], n, m, i, j, show = 0;
	
	scanf("%d",&n);
	scanf("%d",&m);
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			
			scanf("%d",&A[i][j]);
		}
	}
	
	for(j = 0; j < m; j++){
		
		scanf("%d",&B[j]);
	}
	
	
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			
			show += A[i][j] * B[j];
		}
		printf("%d\n",show);
		show = 0;
	}
	
	return 0;
}