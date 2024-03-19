#include <stdio.h>
#define MAX 10000
#define NIL - 1

int n;
struct Node {
	int p, l, r;
};
struct Node T[MAX];

void Preorder (int u) {
	if (u == NIL) {
		return;
	}
	printf(" %d", u);
	Preorder(T[u].l);
	Preorder(T[u].r);
}

void Inorder (int u) {
	if (u == NIL) {
		return;
	}
	Inorder(T[u].l);
	printf(" %d", u);
	Inorder(T[u].r);
}

void Postorder (int u) {
	if (u == NIL) {
		return;
	}
	Postorder(T[u].l);
	Postorder(T[u].r);
	printf(" %d", u);
}

int main () {
	int i, v, l, r, root;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		T[i].p = NIL;
	}

	for (i = 0; i < n; i++) {
		scanf("%d %d %d", &v, &l, &r);
		T[v].l = l;
		T[v].r = r;
		if (l != NIL) {
			T[l].p = v;
		}
		if (r != NIL) {
			T[r].p = v;
		}
	}

	for (i = 0; i < n; i++) {
		if (T[i].p == NIL) {
			root = i;
		}
	}

	printf("Preorder\n");
	Preorder(root);
	putchar('\n');
	printf("Inorder\n");
	Inorder(root);
	putchar('\n');
	printf("Postorder\n");
	Postorder(root);
	putchar('\n');
	
	return 0;
}
