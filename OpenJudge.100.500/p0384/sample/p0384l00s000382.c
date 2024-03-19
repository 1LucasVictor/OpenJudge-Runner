#include<stdio.h>
int main()
{
	char s[1200];
	scanf("%[^\n]", s);
	for(int i = 0; s[i] != '\0'; i++)
	{
		if('A' <= s[i] && s[i] <= 'Z')s[i] += 32;
		else if('a' <= s[i] && s[i] <= 'z')s[i] -= 32;
		printf("%c", s[i]);
	}
	printf("\n");
	return 0;
}
