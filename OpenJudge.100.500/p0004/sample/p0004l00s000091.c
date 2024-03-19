#include <stdio.h>

int saidai ( int a , int b ) {
	int tmp , c;
	if ( a > b ) {
		tmp = a;
		a = b;
		b = tmp;
	}
	while ( b > 0 ) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main (void) {
	int a , b , min , max;
	
	while ( scanf("%d %d",&a,&b) != EOF ) {
		max = saidai(a,b);
		min = a / max * b;
		
		printf("%d %d\n",max,min);
	}
	return 0;
}