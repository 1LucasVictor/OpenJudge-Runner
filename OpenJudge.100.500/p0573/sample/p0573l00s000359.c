#include<stdio.h>
int main()
{
	char s[5];
	scanf("%s", s);
	char c;
	int i;
	for (i = 0; i < 3; i++)
	{
		if (s[i] > s[i + 1])
		{
			c = s[i];
			s[i] = s[i + 1];
			s[i + 1] = c;
			if (i > 0)
				i -= 2;
		}
	}
	if (s[0] == s[1] && s[2] == s[3] && s[1] != s[2])
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}