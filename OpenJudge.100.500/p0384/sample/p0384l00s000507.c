#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char str[1200];
	int i, l;
	fgets(str, 1200, stdin);
	l = strlen(str);
	for (i = 0; i < l; ++i)
	{
		if (isupper(str[i])) str[i] = tolower(str[i]);
		else if (islower(str[i])) str[i] = toupper(str[i]);
	}
	printf("%s", str);
	return 0;
}

