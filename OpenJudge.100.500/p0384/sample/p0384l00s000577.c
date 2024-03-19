#include <stdio.h>
#include <ctype.h>

int main( void )
{
	char str[1200] = { 0 };
	int i = 0;
	
	while( 1 ){
		scanf("%c", &str[i]);
		
		if(islower(str[i])){
			str[i] = toupper(str[i]);
		} else if(isupper(str[i])){
			str[i] = tolower(str[i]);
		} else {
			// DO NOTHING
		}
		
		if(str[i] == '\n') break;
		
		i++;
	}
	
	printf(str);

	return 0;
}