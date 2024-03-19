#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node *r;
	struct node *l;
	struct node *p;
	int key;
};
typedef struct node * Node;

#define NIL NULL

Node root;

Node treeMinimum(Node x) {
	while (x->l != NIL) x = x->l;

	return x;
}

Node treeSuccessor(Node x) {
	Node y = malloc(sizeof(struct node));
	if (x->r != NIL) return treeMinimum(x->r);

	y = x->p;
	while (y != NIL && x == y->r) {
		x = y;
		y = y->p;
	}

	return y;
}

void deleteTree(Node z) {
	Node x,y;
	x = malloc(sizeof(struct node));
	y = malloc(sizeof(struct node));

	if (z->l == NIL || z->r == NIL) y = z;
	else y = treeSuccessor(z);

	if (y->l != NIL) x = y->l;
	else x = y->r;

	if (x != NIL) x->p = y->p;

	if (y->p == NIL) root = x;
	else if (y == y->p->l) y->p->l = x;
	else y->p->r = x;

	if (y != z) z->key = y->key;
}

Node searchTree(Node x,int key) {
	if (x == NIL || key == x->key) return x;
	if (key < x->key) {
		return searchTree(x->l, key);
	}
	else {
		return searchTree(x->r, key);
	}
}

void insert(int k) {
	Node y = NIL;
	Node x = root;
	Node z;

	z = malloc(sizeof(struct node));
	z->key = k;
	z->l = NIL;
	z->r = NIL;

	while (x != NIL) {
		y = x;
		if (z->key < x->key) x = x->l;
		else x = x->r;
	}

	z->p = y;
	if (y == NIL) root = z;
	else if (z->key < y->key) y->l = z;
	else y->r = z;

	return;
}

void inorder(Node x) {
	if (x == NIL) return;
	inorder(x->l);
	printf(" %d",x->key);
	inorder(x->r);
	return;
}

void preorder(Node x) {
	if (x == NIL) return;
	printf(" %d",x->key);
	preorder(x->l);
	preorder(x->r);
	return;
}

int main() {
	int i,n, key;
	char s[10];

	scanf("%d", &n);

	for (i = 0;i < n;i++) {
		scanf("%s", s);
		if (s[0] == 'i') {
			scanf("%d", &key);
			insert(key);
		} else if (s[0] == 'f'){
			scanf("%d", &key);
			if (searchTree(root, key) != NIL) printf("yes\n");
			else printf("no\n");
		} else if (s[0] == 'd'){
			scanf("%d", &key);
			deleteTree(searchTree(root,key));
		} else {
			inorder(root);
			printf("\n");
			preorder(root);
			printf("\n");
		}
	}


	return 0;
}