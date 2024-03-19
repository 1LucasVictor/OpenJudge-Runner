#include<stdio.h>

int main(void)
{
	char n[21], i = 0 ;
	scanf( "%s", n);
	while( n[++i] != '\0' ) ;
	for( i -= 1 ; i >= 0 ; i-- )
		putchar(n[i]);
	putchar('\n');
	return 0;
}