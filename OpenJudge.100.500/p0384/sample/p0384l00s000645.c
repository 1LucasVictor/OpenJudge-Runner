#include <stdio.h>
#include <ctype.h>

int main()
{
	char in;
	for (;;) {
		scanf("%c", &in);
		if (islower(in)) {
			printf("%c", toupper(in));
		} else if (isupper(in)) {
			printf("%c", tolower(in));
		} else {
			printf("%c", in);
		}
		if (in == '\n') {
			return 0;
		}
	}
}