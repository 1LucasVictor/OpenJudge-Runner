#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int max_order				= 0;
	int quantum					= 0;
	char str[256]				= {};
	int i						= 0;
	int j						= 0;
	char p[100000][11]			= {};
	int result[2][100000]		= {};
	int flag 					= 0;
	int time[100000]			= {};
	long long int total_time	= 0;
	
	fgets( str, 256, stdin );
	
	for ( i = 0; str[i] != ' '; i++ ) {
	}
	
	str[i] = '\0';
	
	max_order	= atoi(str);
	quantum		= atoi(&str[i+1]);


	fgets( str, 256, stdin );
	
	for ( j = 0; j < max_order; j++ ) {
		for ( i = 0; str[i] != ' '; i++ ) {
			p[j][i] = str[i];
		}
		p[j][i] = '\0';
		time[j] = atoi( &str[i+1] );
		
		fgets( str, 256, stdin );
	}
	
	flag = 0;
	total_time = 0;
	j = 0;
	i = 0;

	
	while ( flag < max_order ) {
		if ( time[i] == 0 ) {
			i++;
			if ( i >= max_order ) {
			    i = 0;
			}
			continue;
		}
		
		if ( time[i] <= quantum ) {
			total_time += time[i];
			result[0][j]	= i;
			result[1][j]	= total_time;
			time[i]			= 0;
			i++;
			j++;
			if ( i >= max_order ) {
			    i = 0;
			}
			flag++;
		} else {
			total_time		+= quantum;
			time[i]			-= quantum;
			i++;
			if ( i >= max_order ) {
			    i = 0;
			}
		}
	}
	
	for ( i = 0; i < max_order; i++ ) {
		printf("%s %d\n", p[result[0][i]], result[1][i]);
	}
	
	
	return 0;
}
