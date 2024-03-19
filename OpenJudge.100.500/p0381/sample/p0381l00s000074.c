#include <stdio.h>



int main(void) {

	// 1_7-B How many ways?
	
	int n,x;
	int i,j,k;
	int result;

	scanf("%d",&n);
	scanf("%d",&x);

	while( (n!=0) || (x!=0) ){
		result = 0;
		for(i=1; i<=n-2; i++){
			for(j=i+1; j<=n-1; j++){
				k = x-(i+j);
				if( (j<k) && (k<=n) ){	
					result++;
				}
			}
		}
		printf("%d\n",result);
		
		scanf("%d",&n);
		scanf("%d",&x);
	}

	return 0;

}