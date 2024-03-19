#include <stdio.h>
#include <string.h>

int
main()
{
	char str[1001];
	scanf("%s", str);

	int n_orders;
	scanf("%d", &n_orders);

	char order[10];
	char p[1001];
	int a, b;
	int ni, si;
	for (ni = 0; ni < n_orders; ni++)
	{
		scanf("%s", order);
		if (strcmp(order, "print") == 0)
		{
			scanf("%d %d", &a, &b);
			for (si = a; si <= b; si++)
			{
				putchar(str[si]);
			}
			putchar('\n');
			continue;
		}
		if (strcmp(order, "reverse") == 0)
		{
			scanf("%d %d", &a, &b);
			strcpy(p, str);
			for (si = a; si <= b; si++)
			{
				str[si] = p[a+b-si];
			}
			continue;
		}
		if (strcmp(order, "replace") == 0)
		{
			scanf("%d %d %s", &a, &b, p);
			for (si = a; si <= b; si++)
			{
				str[si] = p[si-a];
			}
			continue;
		}
	}

	return 0;
}