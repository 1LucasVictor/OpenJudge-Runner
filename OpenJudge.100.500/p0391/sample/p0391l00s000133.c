#include <stdio.h>          // printf(), scanf()
#include <string.h>         // strcmp(), strncpy(), memcpy()

#define MAX_L 1000
const char NUL = '\0';

int
main(int argc, char** argv)
{
	char str[MAX_L + 1];
	char p[MAX_L + 1];
	char output[MAX_L + 1];
	char cmd[7 + 1]; /* max "replace" */
	int q, a, b;
	int l;
	int i;
	char t;

	scanf("%s\n", str);
	scanf("%d\n", &q);
	while (q--)
	{
		scanf("%s", cmd);
		if (strcmp(cmd, "replace") == 0)
		{
			scanf("%d %d %s\n", &a, &b, p);
			memcpy(&str[a], p, b + 1 - a);
		}

		else if (strcmp(cmd, "reverse") == 0)
		{
			scanf("%d %d\n", &a, &b);
			l = (b + 1 - a) / 2;
			for (i = 0; i < l; ++i)
			{
				t = str[a + i]; /* swap(str[a + i], str[b - i]) */
				str[a + i] = str[b - i];
				str[b - i] = t;
			}
		}

		else if (strcmp(cmd, "print") == 0)
		{
			scanf("%d %d\n", &a, &b);

			l = b + 1 - a;
			strncpy(output, &str[a], l);
			output[l] = NUL;
			printf("%s\n", output);
		}
	}

	return 0;
}