#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char str;

	while (1)
	{
		scanf("%c", &str);

		if (isupper(str))
			str = tolower(str);
		else
			str = toupper(str);
		printf("%c", str);
		if ((str == '\n') || (str == '\0'))
			break;
	}

	return 0;
}