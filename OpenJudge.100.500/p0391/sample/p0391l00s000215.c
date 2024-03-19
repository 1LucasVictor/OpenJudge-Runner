#include <stdio.h>
#include <string.h>

void
print(char *s, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		putchar(s[i]);
	}
	putchar('\n');
}

void
reverse(char *s, int len)
{
	int i;
	int temp;
	for (i = 0; i < len/2; i++)
	{
		temp = s[i];
		s[i] = s[len-i];
		s[len-i] = temp;
	}
}

void
replace(char *s, char *t, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		s[i] = t[i];
	}
}

int
main()
{
	char str[1001];
	scanf("%s", str);

	int n_orders;
	scanf("%d", &n_orders);

	char q[101];
	char p[1001];
	char temp;
	int a, b;
	int ni, si;
	for (ni = 0; ni < n_orders; ni++)
	{
		scanf("%s", q);
		if (strcmp(q, "print") == 0)
		{
			scanf("%d %d", &a, &b);
			print(str+a, b-a+1);
			continue;
		}
		if (strcmp(q, "reverse") == 0)
		{
			scanf("%d %d", &a, &b);
			reverse(str+a, b-a);
			continue;
		}
		if (strcmp(q, "replace") == 0)
		{
			scanf("%d %d %s", &a, &b, p);
			replace(str+a, p, b-a+1);
			continue;
		}
	}
}