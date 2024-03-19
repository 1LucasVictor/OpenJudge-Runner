#include <ctype.h>
#include <stdio.h>

int main(void) {
	char ch;
	
	while(scanf("%c", &ch) && ch != '\n' ){
		if(islower(ch))
			ch = toupper(ch);
		else if(isupper(ch))
			ch = tolower(ch);
		printf("%c", ch);
	}
	putchar('\n');
	
	return 0;
}

