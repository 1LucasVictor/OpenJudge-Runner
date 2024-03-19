#include <stdio.h>          // printf(), scanf()
#define MAX_N 500000

typedef struct node_tbl
{
	int key;
	int parent;
	int left;
	int right;
} node;

const int nil = -1;
node t[MAX_N + 1];
int root;
int ix;

void
insert(int k)
{
	int y = nil;
	int x = root;
	int z = ix++;

	t[z].key = k;
	t[z].left = nil;
	t[z].right = nil;

	while (x != nil)
	{
		y = x;
		if (t[z].key < t[x].key)
			x = t[x].left;
		else
			x = t[x].right;
	}

	t[z].parent = y;
	if (y == nil)
		root = z;
	else
	{
		if (t[z].key < t[y].key)
			t[y].left = z;
		else
			t[y].right = z;
	}
}

void
inorder(int u)
{
	if (u == nil)
		return;

	inorder(t[u].left);
	printf(" %d", t[u].key);
	inorder(t[u].right);
}

void
preorder(int u)
{
	if (u == nil)
		return;

	printf(" %d", t[u].key);
	preorder(t[u].left);
	preorder(t[u].right);
}

int
main(int argc, char** argv)
{
	char command[8];
	int n;
	int x;
	int i;

	root = nil;
	ix = 0;
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
	{
		scanf("%s", command);
		switch (command[0])
		{
		case 'i':
			scanf("%d", &x);
			insert(x);
			break;

		case 'p':
		default:
			inorder(root);
			printf("\n");

			preorder(root);
			printf("\n");
			break;
		}
	}

	return 0;
}