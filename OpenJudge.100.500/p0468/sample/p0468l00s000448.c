#include<stdio.h>
int main()
{
	char s[8];
	scanf("%s", s);
	if (s[1] == 'B')
		s[1] = 'R';
	else
		s[1] = 'B';
	printf("%s\n", s);
	return 0;
}