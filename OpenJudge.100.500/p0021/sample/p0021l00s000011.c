#include <stdio.h>
#include <stdbool.h>
#define N 5000

int calcsum( int *a, int s, int e ){
	int i, sum=0;

	for( i=s; i<=e; i++ ){
		sum += a[i];
	}
	return sum;
}

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
			for( j=i; j<n; j++ ){
				sum = calcsum( s, i, j );
				if( sum > msum )
					msum = sum;
			}
		}
		printf("%d\n", msum);
	}
	return 0;
}