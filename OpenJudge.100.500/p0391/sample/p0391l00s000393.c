#include <stdio.h>

int main(void)
{
	char str[1000];
	char buf[1000];
	char rep[1000];
	char cmd[10];
	int i, j, q;
	int a, b;

	scanf("%s", str);
	scanf("%d", &q);

	for (i = 0; i < q; i++)
	{
		scanf("%s", cmd);
		if (strcmp(cmd, "print") == 0)
		{
			scanf("%d %d", &a, &b);
			strncpy(buf, str + a, b - a + 1);
			buf[b - a + 1] = '\0';
			printf("%s\n", buf);
		}
		else if (strcmp(cmd, "reverse") == 0)
		{
			scanf("%d %d", &a, &b);
			strcpy(buf, str);
			for (j = a; j < b + 1; j++)
			{
				buf[j] = str[b + a - j];
			}
			strcpy(str, buf);
		}
		else if (strcmp(cmd, "replace") == 0)
		{
			scanf("%d %d %s", &a, &b, rep);
			buf[0] = '\0';
			strncat(buf, str, a);
			strcat(buf, rep);
			strcat(buf, str + b + 1);
			strcpy(str, buf);
		}
	}

	return 0;
}
