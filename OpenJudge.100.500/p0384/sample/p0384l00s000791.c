#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int ch;

	while ((ch = getchar()) != EOF) {
		if (isupper(ch)) {
			ch = tolower(ch);
		}
		else {
			ch = toupper(ch);
		}
		putchar(ch);
		if (ch == '\n') {
			break;
		}
	}

	return 0;
}