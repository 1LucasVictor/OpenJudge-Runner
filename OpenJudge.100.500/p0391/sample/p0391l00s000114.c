#include <stdio.h>
#include <string.h>

int
main()
{
	char str[1001];
	scanf("%s", str);

	int n_orders;
	scanf("%d", &n_orders);

	char q[100];
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
			for (si = a; si <= b; si++)
			{
				putchar(str[si]);
			}
			putchar('\n');
			continue;
		}
		if (strcmp(q, "reverse") == 0)
		{
			scanf("%d %d", &a, &b);
			for (si = 0; si <= (b-a)/2; si++)
			{
				temp = str[a+si];
				str[a+si] = str[b+si];
				str[b-si] = temp;
			}
			continue;
		}
		if (strcmp(q, "replace") == 0)
		{
			scanf("%d %d %s", &a, &b, p);
			for (si = a; si <= b; si++)
			{
				str[si] = p[si-a];
			}
			continue;
		}
	}
}