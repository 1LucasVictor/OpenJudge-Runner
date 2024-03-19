#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv){
	int c;
	char s[2] = {};
	int x,cnt;

	for(;;){
		// Input & CountUp
		x = cnt = 0;
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
			s[0] = (char)c;
			x += atoi(s);
			cnt++;
		}
		// Finish Check
		if( x == 0 && cnt == 1 ){
			break;
		}
		// Output
		printf("%d\n",x);
	}

	return 0;
}