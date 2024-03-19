#include<stdio.h>
#include<string.h>

int main()
{
	char s[205], temp1[205], temp2[205];
	int m, h;

	while (1)
	{
		scanf("%s", s);
		if (!strcmp(s, "-"))
			break;
		scanf("%d", &m);
		for (int i = 0; i < m; i++)
		{
			scanf("%d", &h);
			strcpy(temp1, s + h);
			s[h] = '\0';
			strcpy(temp2, s);
			sprintf(s, "%s%s", temp1, temp2);
		}
		printf("%s\n", s);
	}
	return 0;
}
