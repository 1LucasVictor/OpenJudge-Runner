#include<stdio.h>
#include<string.h>

int main(void)
{
	char m[21];
	int f1, s;
	scanf("%s",m);
	s = strlen(m);
	for(f1 = s - 1; f1 >= 0; f1--)
	{
		printf("%c",m[f1]);
	}
	printf("\n");
	return 0;
}