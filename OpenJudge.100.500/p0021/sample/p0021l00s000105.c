#include <stdio.h>
#include<limits.h>

int main ( void ) {
	int i , j , n , sum , max1 , max2 , data[5000];
	
	while ( 1 ) {
		scanf("%d",&n);
		if ( n == 0 ) break;
		sum = 0;
		max1 = INT_MIN;
		max2 = INT_MIN; 
		for ( i =0; i < n; i++ )
			scanf("%d",&data[i]);
		for ( i = 0; i < n; i++ ) {
			sum = 0;
			for ( j = i; j < n; j++ ) {
				sum += data[j];
				if ( max1 < sum ) max1 = sum;
			}
			if ( max2 < max1 ) max2 = max1;
		}
		printf("%d\n",max2);
	}
	return 0;
}