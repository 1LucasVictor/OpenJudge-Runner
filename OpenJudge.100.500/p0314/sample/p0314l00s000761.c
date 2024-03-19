#include <stdio.h>

#define MAX 25

typedef struct {
	int parent;
	int left;
	int right;
} node;

node nodes[MAX] = {0};
int H[MAX];


void preParse(int num) {
	if (num == -1) return;
	printf(" %d", num);
	preParse(nodes[num].left);
	preParse(nodes[num].right);
	return;
}

void inParse(int num) {
	if (num == -1) return;
	inParse(nodes[num].left);
	printf(" %d", num);
	inParse(nodes[num].right);
	return;
}

void postParse(int num) {
	if (num == -1) return;
	postParse(nodes[num].left);
	postParse(nodes[num].right);
	printf(" %d", num);
	return;
}

int search_root(int n) {
	int i;
	for (i = 0; i < n; ++i) {
		if (nodes[i].parent == -1) {
			break;
		}
	}
	return i;
}

int search(int n) {
	int n1, i;
	for (i = 0; i < n; ++i) {
		if (nodes[i].parent == -1) {
			break;
		}
	}
	
	n1 = i;
	while (nodes[n1].left != -1) {
		n1 = nodes[n1].left;
	}
	
	return n1;
}

int main(void) {
	int n;
	int i, tmp, root;
	node init_node;
	init_node.parent = init_node.right = init_node.left = -1;
	for (i = 0; i < MAX; ++i) {
		nodes[i] = init_node;
	}
	
	scanf("%d", &n);
	for (i = 0; i < n; ++i) {
		scanf("%d", &tmp);
		scanf("%d", &nodes[tmp].left);
		scanf("%d", &nodes[tmp].right);
		if (nodes[tmp].left != -1) {
			nodes[nodes[tmp].left].parent = tmp;
		}
		if (nodes[tmp].right != -1) {
			nodes[nodes[tmp].right].parent = tmp;
		}
	}

	root = search_root(n);

//	for (i = 0; i < n; ++i) {
//		printf("node = %d: p = %d: l = %d: r = %d\n", i, nodes[i].parent, nodes[i].left, nodes[i].right);
//	}
	printf("Preorder\n");
	preParse(root);
	printf("\n");
	printf("Inorder\n");
	inParse(root);
	printf("\n");
	printf("Postorder\n");
	postParse(root);
	printf("\n");
	return 0;
}