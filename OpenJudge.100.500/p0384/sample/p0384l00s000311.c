#include <stdio.h>

int main(void)
{
	int i;
	char ch = '\0';
	char T[1200];

	for(i = 0; i < 1200; i++)
	{
		T[i] = '\0';
	}
	
	for(i = 0; i < 1200; i++)
	{
		ch = '\0';
		scanf("%c", &ch);
		if(ch >= 'A' && ch <= 'Z')
		{
			printf("%c", ch + 32);
		}
		else if(ch >= 'a' && ch <= 'z')
		{
			printf("%c", ch - 32);
		}
		else
		{
			printf("%c", ch);
		}
		
		if(ch == '\n')
		{
			break;
		}
	}
	return 0;
}