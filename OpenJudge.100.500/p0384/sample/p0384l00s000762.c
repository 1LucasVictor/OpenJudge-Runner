#include<stdio.h>
#include<string.h>

#define MAXLENGTH 1200
int main(void)
{
	int i;
	char st[MAXLENGTH];

	for (i = 0; i < MAXLENGTH; i++)
	{
		scanf("%c", &st[i]);

		if (('a' <= st[i]) && (st[i] <= 'z'))
			st[i] = st[i] - 'a' + 'A';
		else if (('A' <= st[i]) && (st[i] <= 'Z'))
			st[i] = st[i] - 'A' + 'a';
		else if (st[i] == '\n')
			break;

		printf("%c", st[i]);
		
	}
	printf("\n");

}

