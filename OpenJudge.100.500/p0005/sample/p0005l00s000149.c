#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[81];
	size_t len;    
	size_t i;     
	scanf( "%s", str );

	len = strlen( str ); 
	for(i=0; i<len; ++i)
	{
		printf( "%c", str[len - i - 1] );
	}
	//printf( "\n" );
	return 0;
}