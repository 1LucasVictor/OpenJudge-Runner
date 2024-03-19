#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node *right;
	struct node *left;
	struct node *parent;
	int key;
};

typedef struct node * Node;
#define NIL NULL

Node root = NIL;

Node treeSearch(Node root, int k) {
	if (root == NIL) return NIL;
	if (root->key == k) return root;
	if (root->key > k) {
		if (root->left != NIL) return treeSearch(root->left, k);
		else return NIL;
	} else {
		if (root->right != NIL) return treeSearch(root->right, k);
		else return NIL;
	}
}

int find(Node root, int k) {
	if (root->key == k) return 1;
	if (root->key < k) {
		if (root->left != NIL) return find(root->left, k);
		else return 0;
	} else {
		if (root->right != NIL) return find(root->right, k);
		else return 0;
		
	}
}

void insert(int k) {
	Node y = NIL;
	Node x = root;
	Node z;

	z = malloc(sizeof(struct node));
	z->key = k;
	z->left = NIL;
	z->right = NIL;

	while (x != NIL) {
		y = x;
		if (z->key < x->key) {
			x = x->left;
		} else {
			x = x->right;
		}
	}
	
	z->parent = y;
	
	if (y == NIL) {
		root = z;
	} else if (z->key < y->key) {
		y->left = z;
	} else {
		y->right = z;
	}
}

void inorder(Node u) {
	if (u == NIL) return;
	inorder(u->left);
	printf(" %d", u->key);
	inorder(u->right);
	return;
}

void preorder(Node u) {
	if (u == NIL) return;
	printf(" %d", u->key);
	preorder(u->left);
	preorder(u->right);
	return;
}

Node getMinimum(Node u) {
	while (u->left != NIL) {
		u = u->left;
	}
	return u;
}

Node getSuccessor(Node u) {
	Node y;
	if (u->right != NIL) {
		return getMinimum(u->right);
	}
	
	y = u->parent;
	
	while (y != NIL && u == y->right) {
		u = y;
		u = y->parent;
	}
	return y;
}

void treeDelete(Node z) {
	Node y;
	Node x;
	if (z->left == NIL || z->right == NIL) {
		y = z;
	} else {
		y = getSuccessor(z);
	}

	if (y->left != NIL) {
		x = y->left;
	} else {
		x = y->right;
	}

	if (x != NIL) {
		x->parent = y->parent;
	}

	if (y->parent == NIL) {
		root = x;
	} else if (y == y->parent->left) {
		y->parent->left = x;
	} else {
		y->parent->right = x;
	}

	if (y != z) {
		z->key = y->key;
	}
	
	free(y);
	return;
}

int main(void) {
	int n, i, x;
	char com[20];
	scanf("%d", &n);

	for (i = 0; i < n; ++i) {
		scanf("%s", com);
		if ( com[0] == 'f' ) {
			scanf("%d", &x);
			Node t = treeSearch(root, x);
			if ( t != NIL ) printf("yes\n");
			else printf("no\n");
		} else if ( com[0] == 'i') {
			scanf("%d", &x);
			insert(x);
		} else if ( com[0] == 'p') {
			inorder(root);
			printf("\n");
			preorder(root);
			printf("\n");
		} else if ( com[0] == 'd') {
			scanf("%d", &x);
			treeDelete(treeSearch(root, x));
		} 
	}
	
	return 0;
}