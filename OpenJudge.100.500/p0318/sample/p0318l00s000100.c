#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Tree {
	int key;
	struct Tree *parent, *left, *right;
};

struct Tree *root, *nill;
struct Tree *del;

void insert(int key) {
	struct Tree *x, *y, *z;
	y = nill;
	x = root;

	z = (struct Tree*)malloc(sizeof(struct Tree));
	z->key = key;
	z->left = nill;
	z->right = nill;

	while (x != nill) {
		y = x;
		if (key < x->key)
			x = x->left;
		else
			x = x->right;
	}
	z->parent = y;

	if (y == nill) {
		root = z;
	}
	else if (z->key < y->key)
		y->left = z;
	else
		y->right = z;
}

int find(int key) {
	struct Tree *x;
	x = root;

	while (x != nill) {
		if (x->key == key) {
			del = x;
			return 1;
		}
		else if (x->key > key) 
			x = x->left;
		else
			x = x->right;
	}
	return 0;
}

struct Tree *getMinimum(struct Tree *x) {
	while (x->left != nill)
		x = x->left;
	return x;
}

struct Tree *getSuccessor(struct Tree *x) {
	struct Tree *y;
	if (x->right != nill)
		return getMinimum(x->right);

	y = x->parent;
	while (y != nill && x == y->right) {
		x = y;
		y = y->parent;
	}
	return y;
}

void dele(int key) {
	struct Tree *x, *y;
	
	if (del->left == nill || del->right == nill)
		y = del;
	else
		y = getSuccessor(del);

	if (y->left != nill)
		x = y->left;
	else
		x = y->right;

	if (x != nill)
		x->parent = y->parent;

	if (y->parent == nill)
		root = x;
	else if (y == y->parent->left)
		y->parent->left = x;
	else
		y->parent->right = x;

	if (y != del)
		del->key = y->key;
}

void inorder(struct Tree *t) {
	if (t->left != nill)
		inorder(t->left);
	printf(" %d", t->key);
	if (t->right != nill)
		inorder(t->right);
}

void preorder(struct Tree *t) {
	printf(" %d", t->key);
	if (t->left != nill)
		preorder(t->left);
	if (t->right != nill)
		preorder(t->right);
}

int main(void) {
	int n, key;
	char s[10];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", s);
		if (strcmp(s, "insert") == 0) {
			scanf("%d", &key);
			insert(key);
		}
		else if (strcmp(s, "print") == 0) {
			inorder(root);
			printf("\n");
			preorder(root);
			printf("\n");
		}
		else if (strcmp(s, "find") == 0) {
			scanf("%d", &key);
			if (find(key) == 1)
				printf("yes\n");
			else
				printf("no\n");
		}
		else {
			scanf("%d", &key);
			if (find(key) == 1)
				dele(key);
		}
	}


	return 0;
}
