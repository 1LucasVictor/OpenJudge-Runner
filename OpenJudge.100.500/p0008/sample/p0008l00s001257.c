#include <stdio.h>
#include <math.h>

#define SIZE 10000000
int prime[SIZE];

void sosu(void) {
	int i , j , lim = SIZE / 2;
	prime[0] = prime[1] = 0;
	for ( i = 2; i <= SIZE; i++ ) {
		prime[i] = 1;
	}
	for ( i = 2; i <= lim; i++ ) {
		if ( prime[i]) {
			for ( j = i+i; j <= lim; j += i ) {
				prime[j] = 0;
			}
		}
	}
	return;
}

int main (void) {
	int n , i;
	sosu();
	
	while ( scanf("%d",&n) != EOF ) {
		int count = 0;
		for ( i = 0; i <= n; i++ ) {
			if ( prime[i] ) count++;
		}
		printf("%d\n",count);
	}
	return 0;
}