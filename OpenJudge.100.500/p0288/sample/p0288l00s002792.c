#include <stdio.h> 

int main (){
	int i, j, v, n,k;
	int A[1000000];

	scanf("%d", &n);
	for(i = 0; i < n; i++){	
		scanf("%d", &A[i]);
	} 
	for (k=0; k<n ; k++)printf("%d ", A[k]);			
	printf("\n");
	for (i = 1 ; i < n; i++ ){
		v = A[i];
		j = i-1;
		while(j >= 0 && A[j] > v){
			A[j+1] = A[j];
			j--;
			A[j+1]=v;  
		}  
			for (k=0; k<n ; k++)printf("%d ", A[k]);
			printf("\n");
	}
	printf("\n");
	return 0; 
}