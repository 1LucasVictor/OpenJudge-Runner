#include "stdio.h"
#include "ctype.h"

int main(void)
{
	char ch;

	while(1)
	{
		scanf("%c", &ch);
		if (ch == '\n')
		{
			printf("\n");
			break;
		}
		if (islower(ch))
		{
			ch = toupper(ch);
		}
		else if (isupper(ch))
		{
			ch = tolower(ch);
		}

		printf("%c", ch);
	}

	return 0;
}