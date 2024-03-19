#include<stdio.h>

#define Max 100000

struct Node { int p, l, r; };
struct Node T[Max];

void Preorder(int x){
	if (x == -1) {
		return;
	}
	printf(" %d", x);
	Preorder(T[x].l);
	Preorder(T[x].r);
}

void Inorder(int x) {
	if (x == -1) {
		return;
	}
	Inorder(T[x].l);
	printf(" %d", x);
	Inorder(T[x].r);
}

void Postorder(int x) {
	if (x == -1) {
		return;
	}
	Postorder(T[x].l);
	Postorder(T[x].r);
	printf(" %d", x);
}

int main(void) {
	
	int n, i, c, l, r, root;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		T[i].p = -1;
	}

	for (i = 0; i < n; i++) {
		scanf(" %d %d %d", &c, &l, &r);
		T[c].l = l;
		T[c].r = r;
		if (l != -1) {
			T[l].p = c;
		}
		if (r != -1) {
			T[r].p = c;
		}
	}

	for (i = 0; i < n; i++) {
		if (T[i].p == -1) {
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
