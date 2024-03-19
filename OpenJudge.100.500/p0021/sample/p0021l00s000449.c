#include <stdio.h>

int main ( void ) {
	int i , j , n , sum , max1 , max2;
	
	while ( 1 ) {
		int data[5000] = {0};
		scanf("%d",&n);
		if ( n == 0 ) break;
		sum = 0;
		max1 = 0;
		max2 = 0; 
		for ( i =0; i < n; i++ )
			scanf("%d",&data[i]);
		for ( i = 0; i < n; i++ ) {
			for ( j = i; j < n; j++ ) {
				sum += data[j];
				if ( max1 < sum ) max1 = sum;
			}
			if ( max2 < max1 ) max2 = max1;
			sum = 0;
		}
		printf("%d\n",max2);
	}
	return 0;
}