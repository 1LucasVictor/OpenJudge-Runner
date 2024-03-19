#include<stdio.h>
#include<ctype.h>

int main()
{
	char str[1200];
	int count = 0, i, j;
	fgets(str, 1200, stdin);

	for (i = 0; i < 1201; i++) if (str[i] == '\n') count = i;

	for (j = 0; j <= count; j++){
		if (islower(str[j]) == 0) printf("%c", tolower(str[j]));
		else                      printf("%c", toupper(str[j]));
	}

	return 0;
}