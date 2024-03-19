#include <stdio.h>
#include <stdlib.h>

struct node {
	int key;
	struct node *car;
	struct node *cdr;
	struct node *parent;
};

struct node *root;

void
record(struct node *r, struct node *p)
{
	if (p->key < r->key) {
		if (r->car == NULL)
			r->car = p, p->parent = r;
		else
			record(r->car, p);
	} else {
		if (r->cdr == NULL)
			r->cdr = p, p->parent = r;
		else
			record(r->cdr, p);
	}
}

void
delete(struct node *p)
{
	struct node *c = NULL;

	if (p->car != NULL && p->cdr != NULL) {
		for (c = p->cdr; c->car != NULL; c = c->car);
		p->key = c->key;
		return delete(c);
	}

	if (p->car != NULL)
		c = p->car;
	else if (p->cdr != NULL)
		c = p->cdr;

	if (c != NULL)
		c->parent = p->parent;

	if (p->parent == NULL) {
		root = c;
	} else if (p->parent->car == p) {
		p->parent->car = c;
	} else {
		p->parent->cdr = c;
	}
	free(p);
}

struct node *
find(struct node *r, int key)
{
	if (r == NULL)
		return r;
	else if (key == r->key)
		return r;
	else if (key < r->key) {
		if (r->car == NULL)
			return NULL;
		else
			return find(r->car, key);
	} else {
		if (r->cdr == NULL)
			return NULL;
		else
			return find(r->cdr, key);
	}
}

void
preorder(struct node *a)
{
	if (a == NULL)
		return;

	printf(" %d", a->key);
	preorder(a->car);
	preorder(a->cdr);
}

void
inorder(struct node *a)
{
	if (a == NULL)
		return;

	inorder(a->car);
	printf(" %d", a->key);
	inorder(a->cdr);
}

int
main(void)
{
	int i, n, p;
	struct node *a;
	scanf("%d", &n);

	for (i = p = 0; i < n; i++) {
		char cmd[16];
		int key;

		scanf("%s", cmd);
		switch (cmd[0]) {
		case 'i':
			scanf("%d", &key);
			a = (struct node *)malloc(sizeof(struct node));
			if (a == NULL)
				return 1;
			a->key = key;
			a->car = NULL;
			a->cdr = NULL;
			if (root == NULL)
				root = a;
			else
				record(root, a);
			break;
		case 'f':
			scanf("%d", &key);
			printf("%s\n",
			       find(root, key) != NULL ? "yes" : "no");
			break;
		case 'd':
			scanf("%d", &key);
			a = find(root, key);
			if (a != NULL)
				delete(a);
			break;
		case 'p':
			inorder(root);
			printf("\n");
			preorder(root);
			printf("\n");
			break;
		}
	}

	return 0;
}

