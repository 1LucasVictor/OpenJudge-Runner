#include <stdio.h>
#include <stdbool.h>
#define N 5000


int main(){
	int s[N];
	int i, j;
	int n;
	int sum, msum;

	for(;;){
		scanf("%d", &n);
		if( n==0 )
			break;

		for( i=0; i<n; i++ )
			scanf("%d", &s[i]);
		
		for( i=0, msum=0; i<n; i++ ){
			for( j=i, sum=0; j<n; j++ ){
				sum += s[j];
				if( sum > msum )
					msum = sum;
			}
		}
		printf("%d\n", msum);
	}
	return 0;
}