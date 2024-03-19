#include <stdio.h>

int saisyou ( int a , int b ) {
	int i;
	if ( a < b ) i = b;
	else i = a;
	while ( i % a != 0 || i % b != 0 ) {
		i++;
	}
	return i;
}

int saidai ( int a , int b ) {
	int i;
	if ( a < b ) i = a;
	else i = b;
	while ( a % i != 0 || b % i != 0 ) {
		i--;
	}
	return i;
}

int main (void) {
	int a , b , min , max;
	
	while ( scanf("%d %d",&a,&b) != EOF ) {
		min = saisyou(a,b);
		max = saidai(a,b);
		
		printf("%d %d\n",max,min);
	}
	return 0;
}