#include <stdio.h>
#include <stdlib.h>

struct node_t {
	int key;
	struct node_t *parent;
	struct node_t *left;
	struct node_t *right;
};
typedef struct node_t Node;

Node *tree_insert(Node *top, Node *z) {
	Node *y, *x;

	y = NULL;
	x = top;
	while (x != NULL) {
		y = x;
		if (z->key < x->key) {
			x = x->left;
		} else {
			x = x->right;
		}
	}
	z->parent = y;
	if (y == NULL) {
		top = z;
	} else if (z->key < y->key) {
		y->left = z;
	} else {
		y->right = z;
	}
	return top;
}

void inorder_walk(Node *node) {
	if (node->left != NULL) {
		inorder_walk(node->left);
	}
	printf(" %d", node->key);
	if (node->right != NULL) {
		inorder_walk(node->right);
	}
}

void preorder_walk(Node *node) {
	printf(" %d", node->key);
	if (node->left != NULL) {
		preorder_walk(node->left);
	}
	if (node->right != NULL) {
		preorder_walk(node->right);
	}
}

int main(void) {
	int n, i, key;
	char cmd[20];
	Node *top = NULL, *p;

	scanf("%d ", &n);
	for (i = 0; i < n; i++) {
		scanf("%s %d ", cmd, &key);
		if (cmd[0] == 'i') {
			p = malloc(sizeof(Node));
			p->key = key;
			p->parent = p->left = p->right = NULL;
			top = tree_insert(top, p);
		} else {
			inorder_walk(top);
			putchar('\n');
			preorder_walk(top);
			putchar('\n');
		}
	}
	return 0;
}