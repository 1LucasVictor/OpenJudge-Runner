#include <stdio.h>
#include <math.h>

/*

?¨???????

2????????´??° a, b ??¨1??????????????? op ?????????????????§???a op b ????¨??????????????????°?????????????????????????????????????????????????????? op ??????"+"(???)???"-"(???)???"*"(???)???"/"(???)???????????¨?????????????????§????????????????????´??????????°???°?????\??????????????¨????????????????¨????????????¨????????????

Input
??\???????????°????????????????????????????§???????????????????????????????????????????????????¢????????\????????¨????????§???:

a op b

op ??? '?' ?????¨??? ??\?????????????????????????????????????????±???????????????????????£????????????????????????

Output
?????????????????????????????????????¨?????????????1??????????????????????????????

*/

int main( void )
{
	int a, b;

	char c;

	while ( 1 ) {

		scanf( "%d %c %d", &a, &c, &b );

		switch ( c ) {
			default:
				break;
			case '+':
				printf( "%d\n", a + b );
				break;
			case '-':
				printf( "%d\n", a - b );
				break;
			case '*':
				printf( "%d\n", a * b );
				break;
			case '/':
				printf( "%d\n", a / b );
				break;
		}

		if ( c == '?' ) {
			break;
		}
	}

	return 0;
}