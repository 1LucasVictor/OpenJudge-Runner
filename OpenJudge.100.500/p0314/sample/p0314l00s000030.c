#include<stdio.h>
#define MAX 25
#define NIL -1
typedef struct  { int parent, left, right; }Node;

Node T[MAX];
int n, D[MAX], H[MAX];

void preorder(int u)
{
	if (u == NIL) return;
	printf(" %d", u);
	preorder(T[u].left);
	preorder(T[u].right);
}
void inorder(int u)
{
	if (u == NIL) return;
	inorder(T[u].left);
	printf(" %d", u);
	inorder(T[u].right);
}
void postorder(int u)
{
	if (u == NIL) return;
	postorder(T[u].left);
	postorder(T[u].right);
	printf(" %d", u);
}
int main()
{
	int v, l, r, root = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) T[i].parent = NIL;

	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &v, &l, &r);
		T[v].left = l;
		T[v].right = r;
		if (l != NIL) T[l].parent = v;
		if (r != NIL) T[r].parent = v;
	}

	for (int i = 0; i < n; i++) {
		if (T[i].parent == NIL) root = i;
	}

	printf("Preorder\n");
	preorder(root);
	printf("\nInorder\n");
	inorder(root);
	printf("\nPostorder\n");
	postorder(root);
	printf("\n");
}
