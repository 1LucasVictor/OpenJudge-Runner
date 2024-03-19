#include <stdio.h>
#include <string.h>

int main( void )
{
	char card[201];
	char temp[201];
	int m, h, i;
	
	while( 1 ){
		scanf("%s", card);
		
		if(!strcmp(card, "-")) break;
		
		scanf("%d", &m);
		
		for(i = 0; i < m; i++){
			scanf("%d", &h);
			
			strcpy(temp, card+h);
			strncat(temp, card, h);
			strcpy(card, temp);
		}
		
		printf("%s\n", card);
	}
	
	return 0;
}