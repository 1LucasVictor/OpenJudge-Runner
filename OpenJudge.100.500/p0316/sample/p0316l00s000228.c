#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NIL NULL
 struct Node {
	int key;
	struct Node * right, * left, * parent;
};
typedef struct Node *Node;

Node root;

void inorder(Node);
void preordee(Node);
void insert(int);

void insert(int k) {
	Node x, y, z;
	y = NIL;
	x = root;
	z = malloc(sizeof(struct Node));
	z->key = k;
	z->left = NIL;
	z->right = NIL;
	while (x != NIL) {
		y = x;
		if (z->key < x->key) {
			x = x->left;
		}
		else {
			x = x->right;
		}
	}
	z->parent = y;
	if (y == NIL) {
		root = z;
	}
	else {
		if (z->key < y->key) {
			y->left = z;
		}
		else {
			y->right = z;
		}
	}
}

void inorder(Node u) {
	if (u->left != NIL && u->right != NIL) {
		inorder(u->left);
		printf(" %d", u->key);
		inorder(u->right);
	}
	if (u->left != NIL && u->right == NIL) {
		inorder(u->left);
		printf(" %d", u->key);
	}
	if (u -> right != NIL && u->left == NIL) {
		printf(" %d", u -> key);
		inorder(u -> right);
	}
	if (u->left == NIL && u->right == NIL)printf(" %d", u->key);
}

void preorder(struct Node* u) {
	printf(" %d", u->key);
	if (u->left != NIL) {
		preorder(u->left);
	}
	if (u->right != NIL) {
		preorder(u->right);
	}
}

int main(void) {
	int n, i, x;
	char com[7];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", com);
		if (strcmp(com, "print")==0) {
			inorder(root);
			printf("\n");
			preorder(root);
			printf("\n");
		}
		else if (strcmp(com,"insert")==0){
			scanf("%d", &x);
			insert(x);
		}
	}
	return 0;
}
