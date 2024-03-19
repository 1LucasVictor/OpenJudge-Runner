#include <stdio.h>

struct tree
{
	int a, b, c;
};
struct tree x[10000];
int n;

void preParse(int u)
{
	if (u == -1)
		return;
	printf(" %d", u);
	preParse(x[u].b);
	preParse(x[u].c);
}

void inParse(int u)
{
	if (u == -1)
		return;
	inParse(x[u].b);
	printf(" %d", u);
	inParse(x[u].c);
}

void postParse(int u)
{
	if (u == -1)
		return;
	postParse(x[u].b);
	postParse(x[u].c);
	printf(" %d", u);
}

int main()
{
	int i, y, b, c, r;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		x[i].a = -1;

	for (i = 0; i < n; i++)
	{
		scanf("%d %d %d", &y, &b, &c);
		x[y].b = b;
		x[y].c = c;

		if (b != -1)
			x[b].a = y;
		if (c != -1)
			x[c].a = y;
	}

	for (i = 0; i < n; i++)
	{
		if (x[i].a == -1)
			r = i;
	}

	puts("Preorder");
	preParse(r);
	putchar('\n');
	puts("Inorder");
	inParse(r);
	putchar('\n');
	puts("Postorder");
	postParse(r);
	putchar('\n');

	return 0;
}
