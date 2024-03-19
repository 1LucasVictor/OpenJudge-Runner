#include <stdio.h>

int main(void) {
	int n,i,j,k=0;

	scanf("%d\n",&n);
	int ans[n];
	
	for(i=0;i<=n;i++){
		
		if(i % 3 == 0 || i % 10 == 3){
			ans[0+k] = i; 
			k++;
		}
		
	}
	
	for (i=1;i<k;i++){
		
			printf(" %d",ans[i]);
			if(ans[i] == n){
				printf("\n");
			}
	}
	return 0;
}