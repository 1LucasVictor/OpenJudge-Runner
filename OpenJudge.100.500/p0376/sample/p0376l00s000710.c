#include <stdio.h>
 
int main(void){

	int n, i;
	int S[100];

	scanf("%d", &n);
		for(i=0; i<n; i++) {
			scanf("%d", &S[i]);
		}

	for(i=n-1; i>=0; i--) {
		if(i==0){
			printf("%d", S[i]);
	}
	else{
		printf("%d ", S[i]);
		}
	}
	printf("\n");

	return 0;
}