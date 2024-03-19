#include <stdio.h>

int main () {
	int n , i , rent = 100000;
	scanf("%d",&n);
	for ( i = 0; i < n; i++ ) {
		rent *= 1.05;
		int up = rent % 1000;
		if ( up > 0 )
			rent += (1000 - up);
	}
	printf("%d\n",rent);
	return 0;
}