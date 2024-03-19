#include <stdio.h>

/*

?????°
???????????????2????????´??° a ??¨ b ??????????????°???????????????????????°?????????????????????????????????

Input
?????°????????????????????????????????????????????????????????????????????? 1 ???????????????????????????????????????????????????2????????´??° a ??¨ b ???1????????????????????§??????????????????????????????????????\????????????????????§????????????????????????

Constraints
0 ? a, b ? 1,000,000
???????????????????????° ? 200
Output
??????????????????????????¨??????a+b ????????°???????????????????????????

*/

int digitNumber( int num )
{
	if ( num < 10 ) {
		return 1;
	}
	else if ( num < 100 ) {
		return 2;
	}
	else if ( num < 1000 ) {
		return 3;
	}
	else if ( num < 10000 ) {
		return 4;
	}
	else if ( num < 100000 ) {
		return 5;
	}
	else if ( num < 1000000 ) {
		return 6;
	}
	else {
		return 7;
	}
}

int main( void )
{
	int a, b;
	
	while(scanf("%d %d", &a, &b) != EOF) {
	
		printf( "%d\n", digitNumber( a + b ) );
	}
	
	return 0;
}