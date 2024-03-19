#include <stdio.h>
#include <stdlib.h>
#define NIL NULL

struct node {
	int key;
	struct node *right, *left, *parent;
};

typedef struct node Node;

Node *root;

void insert(int);
void print_i(Node *);
void print_p(Node *);
Node *find(int);
void delete (Node *);
Node *Minimum(Node *);
Node *getSuccessor(Node *);

int main() {
	int i;
	int n, k;
	char com[32];
	Node *u;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", com);

		if (com[0] == 'i') {
			scanf("%d", &k);
			insert(k);
		} else if (com[0] == 'p') {
			print_i(root);
			printf("\n");
			print_p(root);
			printf("\n");
		} else if (com[0] == 'd') {
			scanf("%d", &k);
			delete (find(k));
		} else {
			scanf("%d", &k);
			if (find(k) != NIL) {
				printf("yes\n");
			} else {
				printf("no\n");
			}
		}
	}
}

void insert(int k) {
	Node *y = NIL;
	Node *x = root;
	Node *z;

	z = (Node *)malloc(sizeof(Node));
	z->key = k;
	z->left = NIL;
	z->right = NIL;

	//場所決め
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
	} else {
		if (z->key < y->key) {
			y->left = z;
		} else {
			y->right = z;
		}
	}
}

void print_i(Node *s) {
	if (s == NIL) return;
	print_i(s->left);
	printf(" %d", s->key);
	print_i(s->right);
}
void print_p(Node *s) {
	if (s == NIL) return;
	printf(" %d", s->key);
	print_p(s->left);
	print_p(s->right);
}

Node *find(int k) {
	Node *s = root;
	while (s != NIL && k != s->key) {
		if (k < s->key) {
			s = s->left;
		} else {
			s = s->right;
		}
	}
	return s;
}

void delete (Node *z) {
	Node *y;  //削除対象
	Node *x;  // yの子

	//削除する節点を決める
	if (z->left == NIL || z->right == NIL) {
		y = z;
	} else {
		y = getSuccessor(z);
	}

	// yの子を決める
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
	} else {
		if (y == y->parent->left) {
			y->parent->left = x;
		} else {
			y->parent->right = x;
		}
	}

	if (y != z) {
		z->key = y->key;
	}

	free(y);
}

Node *getSuccessor(Node *x) {
	if (x->right != NIL) {
		return Minimum(x->right);
	}
	Node *y = x->parent;
	while (y != NIL && x == y->right) {
		x = y;
		y = y->parent;
	}
	return y;
}

Node *Minimum(Node *s) {
	while (s->left != NIL) {
		s = s->left;
	}
	return s;
}
