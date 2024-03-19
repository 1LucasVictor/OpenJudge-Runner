#include <stdio.h>

int main( void )
{
  	int i=0;
  	char s[3];
  
  	scanf( "%s\n", s );
  
   	if( s[0] == '1' ) i++;
  	if( s[1] == '1' ) i++;
  	if( s[2] == '1' ) i++;
      
  	printf( "%d\n", i );
  
 	return 0; 
}