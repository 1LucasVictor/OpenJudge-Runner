#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv){
	int c;
	int x;

	for(;;){
		// Input & CountUp
		x = 0;
		for(;;){
			c = getchar();
			// EOL/EOF Check
			if( c == EOF || c == '\n' ){
				break;
			}
			// Number Check
			if( !isdigit(c) ){
				continue;
			}
			// Convert & CountUp
			x += (char)(c-'0');
		}
		// Finish Check
		if( x == 0 ){
			break;
		}
		// Output
		printf("%d\n",x);
	}

	return 0;
}