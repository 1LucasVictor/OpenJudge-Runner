#include <stdio.h>
#include <ctype.h>

int main(void) {
	char ch;
	
	while (1) {
		scanf("%c", &ch);
		
		if (islower(ch)) ch = (char)toupper(ch);
		else if (isupper(ch)) ch = (char)tolower(ch);
		
		putchar(ch);
		
		if (ch == '\n') break;
	}
	
	return 0;
}