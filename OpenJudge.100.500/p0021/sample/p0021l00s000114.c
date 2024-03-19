#include <stdio.h>

int main ( void ) {
	int i , j , Input , sum , max1 , max2;
	
	while ( 1 ) {
		int data[5000] = {0};
		sum = 0; max1 = 0; max2 = 0; 
		scanf("%d",&Input);
		if ( Input == 0 ) break;
		for ( i =0; i < Input; i++ )
			scanf("%d",&data[i]);
		for ( i = 0; i < Input; i++ ) {
			for ( j = i; j < Input; j++ ) {
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