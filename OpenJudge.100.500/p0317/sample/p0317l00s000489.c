# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int key;
	struct node *p_left;
	struct node *p_right;
	struct node *p_parent;
}NODE;

void insert(int value);	/* ?????\ */
void inorder(NODE *p_node);	/* ??????????????? */
void preorder(NODE *p_node); /* ??????????????? */
int find(int value);

NODE *p_root;

int main(void) {

	char command[20];
	int value;
	int n;
	int i;
	int result_find;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%s", &command);
		if (command[0] == 'i') {
			scanf("%d", &value);
			insert(value);
		}
		else if (command[0] == 'p') {
			inorder(p_root);
			printf("\n");
			preorder(p_root);
			printf("\n");
		}
		else if (command[0] == 'f') {
			scanf("%d", &value);
			result_find =find(value);
			if (result_find == 0) {
				printf("no\n");
			}
			else {
				printf("yes\n");
			}
		}
	}
	return 0;
}

void insert(int value) {
	NODE *x = p_root;	/* ??? */
	NODE *y = NULL;	/* x?????? */

	NODE *z = (NODE *)malloc(sizeof(NODE));
	z->key = value;
	z->p_left = NULL;
	z->p_right = NULL;

	while (x != NULL) {
		y = x;
		if (z->key < x->key) {
			x = x->p_left;		/* ?????????????§???? */
		}
		else {
			x = x->p_right;	/* ?????????????§???? */
		}
	}
	z->p_parent = y;

	if (y == NULL) {	/* ??¨???????????´??? */
		p_root = z;
	}
	else if (z->key < y->key) {
		y->p_left = z;	//z?????????????????????
	}
	else {
		y->p_right = z;	//z?????????????????????
	}
}

//?????????????????§??¨???
void inorder(NODE *p_node) {

	if (p_node == NULL) {
		return;
	}
	inorder(p_node->p_left);
	printf(" %d", p_node->key);
	inorder(p_node->p_right);
}

//?????????????????§??¨???
void preorder(NODE *p_node) {

	if (p_node == NULL) {
		return;
	}
	printf(" %d", p_node->key);
	preorder(p_node->p_left);
	preorder(p_node->p_right);
}

int find(int value) {
	
	NODE *p_node;
	p_node = p_root;

	while (1) {
		if (p_node->key > value) {
			if (p_node->p_left != NULL) {
				p_node = p_node->p_left;
			}
			else {
				return 0;
			}
		}
		else if (p_node->key < value) {
			if (p_node->p_right != NULL) {
				p_node = p_node->p_right;
			}
			else {
				return 0;
			}
		}
		else {
			return 1;
		}
	}
}