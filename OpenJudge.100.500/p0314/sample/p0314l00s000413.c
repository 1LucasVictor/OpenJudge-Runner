// AOJ ALDS1_7_C Tree Walk
// 2018.5.1 bal4u

#include <stdio.h>

#if 1
#define gc() getchar_unlocked()
#else
#define gc() getchar()
#endif
int in()
{
	int n = 0, c = gc();
	if (c == '-') {	c = gc();
		do n = 10*n + (c & 0xf), c = gc(); while (c >= '0');
		return -n;
	}
	do n = 10*n + (c & 0xf), c = gc(); while (c >= '0');
	return n;
}

typedef struct { int parent; int left, right; } TREE;
TREE tree[30];

void preorder(int node)
{
	printf(" %d", node);
	if (tree[node].left  >= 0) preorder(tree[node].left);
	if (tree[node].right >= 0) preorder(tree[node].right);
}

void inorder(int node)
{
	if (tree[node].left  >= 0) inorder(tree[node].left);
	printf(" %d", node);
	if (tree[node].right >= 0) inorder(tree[node].right);
}

void postorder(int node)
{
	if (tree[node].left  >= 0) postorder(tree[node].left);
	if (tree[node].right >= 0) postorder(tree[node].right);
	printf(" %d", node);
}

int main()
{
	int n, i, id;
	int root, left, right;

	n = in();
	for (i = 0; i < n; i++) {
		id = in();
		tree[id].left  = left =  in();
		tree[id].right = right = in();
		if (tree[id].left  >= 0) tree[left ].parent = id+1;
		if (tree[id].right >= 0) tree[right].parent = id+1;
	}
	for (root = 0; root < n; root++) {
		if (tree[root].parent == 0) break;
	}

	puts("Preorder");
	preorder(root); putchar('\n');
	puts("Inorder");
	inorder(root); putchar('\n');
	puts("Postorder");
	postorder(root); putchar('\n');
	return 0;
}
