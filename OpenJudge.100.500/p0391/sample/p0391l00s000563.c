#include<stdio.h>
#include<string.h>

int main()
{
	char str[105], p[105], command[10];
	int a, b, q, tmp;

	scanf("%s", str);
	scanf("%d", &q);

	for (int i = 0; i < q; i++)
	{
		scanf("%s", command);
		scanf("%d%d", &a, &b);
		if (!strcmp(command, "print"))
		{
			for (int j = a; j <= b; j++)
				printf("%c", str[j]);
			printf("\n");
		}
		else if (!strcmp(command, "reverse"))
		{
			for (int j = 0; a + 2 * j <= b; j++)
			{
				tmp = str[a + j];
				str[a + j] = str[b - j];
				str[b - j] = tmp;
			}
		}
		else
		{
			scanf("%s", p);
			for (int j = 0; j <= b - a; j++)
				str[a + j] = p[j];
		}
	}
}
