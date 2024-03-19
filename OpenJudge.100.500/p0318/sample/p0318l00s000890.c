#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
	int key;
	struct _node **parent;
	struct _node *left;
	struct _node *right;
} node;

typedef void(*FUNCP)(node *);

node *allocNode(int key) {
	node *p = (node *)malloc(sizeof(node));
	p->key = key;
	p->parent = NULL;
	p->left = NULL;
	p->right = NULL;

	return p;
}

void terminate(node *p) {
	if (p == NULL) return;
	terminate(p->left);
	terminate(p->right);
	free(p);
}

node *insert(node *p, node *c) {
	if (p == NULL) return c;
	if (c->key < p->key) {
		p->left = insert(p->left, c);
		p->left->parent = &(p->left);
	}
	else {
		p->right = insert(p->right, c);
		p->right->parent = &(p->right);
	}
	return p;
}

node *find(node *p, int key) {
	if (p != NULL && p->key != key) {
		if (key < p->key) p = find(p->left, key);
		else p = find(p->right, key);
	}
	return p;
}

void delete(node **root, int key) {
	node *next, *p;
	node **right, **pp;

	p = find(*root, key);
	if (p == NULL) return;
	pp = p->parent;
	if (p->right == NULL)	next = p->left;
	else if (p->left == NULL)	next = p->right;
	else {
		right = p->right->parent;
		while ((*right)->left != NULL)
			right = (*right)->left->parent;
		next = *right;
		*right = next->right;
		next->left = p->left;
		next->right = p->right;
	}
	if (pp != NULL)	*pp = next; else *root = next;
	if (next != NULL) next->parent = pp;
	free(p);
}

void inParse(node *p) {
	if (p == NULL) return;
	inParse(p->left);
	printf(" %d", p->key);
	inParse(p->right);
}

void preParse(node *p) {
	if (p == NULL) return;
	printf(" %d", p->key);
	preParse(p->left);
	preParse(p->right);
}

void dump(node *p, FUNCP funcp) {
	(funcp)(p);
	printf("\n");
}

int main() {
	int n, i, key;
	char order[7];
	node *p;
	node *root = NULL;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", order);
		switch (order[0])
		{
		case 'i':
			scanf("%d", &key);
			p = allocNode(key);
			root = insert(root, p);
			break;
		case 'p':
			dump(root, &inParse);
			dump(root, &preParse);
			break;
		case 'f':
			scanf("%d", &key);
			if (find(root, key) != NULL) printf("yes\n");
			else printf("no\n");
			break;
		case 'd':
			scanf("%d", &key);
			delete(&root,key);
			break;
		}
	}
	terminate(root);

	return 0;
}

