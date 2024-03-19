#include <stdio.h>

int fib_num(int number);

int main(void) {
	int n		= 0;
	int result	= 0;
	scanf("%d\n",  &n );
	
	result = fib_num(n);
	
	printf("%d\n",result);
	
	return 0;
}

int fib_num(int number) {
	
	if ( number < 0 ) {
		printf("error\n");
		return -1;
	}
	
	if ( number <= 1) {
		return 1;
	}
	
	
	return fib_num( number -1 ) + fib_num( number - 2 );
}
