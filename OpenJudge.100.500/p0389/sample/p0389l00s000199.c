#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Max_number 210

void shuffle ( char *str, int num );

int main(void) {
	char cards[Max_number]			= {};
	int num_order					= 0;
	int cmd							= 0;
	char result[10][Max_number]		= {};
	int i							= 0;
	int number						= 0;
	
	
	while ( 1 ) {
		scanf( "%s", cards );
		if ( cards[0] == '-' ) {
			break;
		}
		
		scanf( "%d", &num_order );
		
		for ( i = 0; i < num_order; i++ ) {
			scanf("%d", &cmd );
			shuffle( cards, cmd );
		}
		
		for ( i = 0;  cards[i] != '\0'; i++ ) {
			result[number][i] = cards[i];
		}
		result[number][i] = '\0';
		
		number++;
	}
	
	for ( i = 0; i < number; i++ ) {
	    printf("%s\n", result[i]);
	}
	
	return 0;
}

void shuffle ( char *str, int num )
{
	char front[Max_number] = {};
	char back[Max_number] = {};

	strcpy( back, &str[num] );
	str[num] = '\0';
	strcpy( front, &str[0] );
	strcat(back, front);
	
	strcpy(str, back );
	return;
}
