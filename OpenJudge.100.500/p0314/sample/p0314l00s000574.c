#include <stdio.h>

struct Node {
	int p, l, r;
};
struct Node T[10000];

void preParse(int u) {
	if (u == -1) {
		return;
	}
	printf(" %d", u);
	preParse(T[u].l);
	preParse(T[u].r);
}

void inParse(int u) {
	if (u == -1) {
		return;
	}
	inParse(T[u].l);
	printf(" %d", u);
	inParse(T[u].r);
}

void postParse(int u) {
	if (u == -1) {
		return;
	}
	postParse(T[u].l);
	postParse(T[u].r);
	printf(" %d", u);
}

int main(void)
{
	int i, num, root, a, b, c;

	scanf("%d", &num);
	for (i = 0; i < num; i++) {
		T[i].p = -1;
	}

	for (i = 0; i < num; i++) {
		scanf("%d %d %d", &a, &b, &c);
		T[a].l = b;
		T[a].r = c;
		if (b != -1) {
			T[b].p = a;
		}
		if (c != -1) {
			T[c].p = a;
		}
	}

	for (i = 0; i < num; i++) {
		if (T[i].p == -1) {
			root = i;
		}
	}

	printf("Preorder\n");
	preParse(root);
	putchar('\n');
	printf("Inorder\n");
	inParse(root);
	putchar('\n');
	printf("Postorder\n");
	postParse(root);
	putchar('\n');
	
	return 0;
}
