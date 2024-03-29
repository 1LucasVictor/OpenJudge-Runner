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
void inorderTreeWalk(NODE *p_node);	/* ??????????????? */
void preorderTreeWalk(NODE *p_node); /* ??????????????? */
int find(int value);	/* ??¢?´¢ */
void delete(int value);	/* ?????? */
void deleteHasNoChildNode(NODE *z);	/* ?????????????????????????????????????????? */
void deleteHasOneChildNode(NODE *z); /* ?????????????????????????????????????????? */
void deleteHasTwoChildlenNode(NODE *z);	/* ?????????????????????????????????????????? */

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
		/* insert */
		if (command[0] == 'i') {
			scanf("%d", &value);
			insert(value);
		}
		/* print */
		else if (command[0] == 'p') {
			inorderTreeWalk(p_root);
			printf("\n");
			preorderTreeWalk(p_root);
			printf("\n");
		}
		/* find */
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
		/* delete */
		else if (command[0] == 'd') {
			scanf("%d", &value);
			delete(value);
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
void inorderTreeWalk(NODE *p_node) {

	if (p_node == NULL) {
		return;
	}
	inorderTreeWalk(p_node->p_left);
	printf(" %d", p_node->key);
	inorderTreeWalk(p_node->p_right);
}

//?????????????????§??¨???
void preorderTreeWalk(NODE *p_node) {

	if (p_node == NULL) {
		return;
	}
	printf(" %d", p_node->key);
	preorderTreeWalk(p_node->p_left);
	preorderTreeWalk(p_node->p_right);
}

/* ??????????????????value????????¨????????????????????±????????? */
/* ????????????0 : ?????¨?????????, 1 : ?????¨?????? */
int find(int value) {
	
	NODE *p_node;
	p_node = p_root;

	while (1) {
		if (p_node->key > value) {
			if (p_node->p_left != NULL) {
				p_node = p_node->p_left; /* ?????????????§???? */
			}
			else {
				return 0;
			}
		}
		else if (p_node->key < value) {
			if (p_node->p_right != NULL) {
				p_node = p_node->p_right; /* ?????????????§???? */
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

void delete(int value) {
	NODE *z;
	z = p_root;

	/* ?????????????????????????????¢??? */
	while (1) {
		if (z->key > value) {
			z = z->p_left; /* ?????????????§???? */
		}
		else if (z->key < value) {
			z = z->p_right; /* ?????????????§???? */
		}
		else {
			break;
		}
	}

	/* ??????????±????????????????????????????????????¨??? */
	if (z->p_left == NULL && z->p_right == NULL) {
		deleteHasNoChildNode(z);
	}
	/* ??????????±??????????????????????????????????????????¨??? */
	else if (z->p_right == NULL || z->p_left == NULL) {
		
		deleteHasOneChildNode(z);
	}
	/* ??????????±????????????????????????????????????¨??? */
	else {
		deleteHasTwoChildlenNode(z);
	}
}

/* ?????????????????????????????????????????? */
void deleteHasNoChildNode(NODE *z) {

	if (z->key > z->p_parent->key) {
		z->p_parent->p_right = NULL;
	}
	else {
		z->p_parent->p_left = NULL;
	}
	free(z);
}

/* ?????????????????????????????????????????? */
void deleteHasOneChildNode(NODE *z) {

	if (z->p_left != NULL) {
		if (z->key > z->p_parent->key) {
			z->p_parent->p_right = z->p_left;
		}
		else {
			z->p_parent->p_left = z->p_left;
		}
		z->p_left->p_parent = z->p_parent;
	}

	else{
		if (z->key > z->p_parent->key) {
			z->p_parent->p_right = z->p_right;
		}
		else {
			z->p_parent->p_left = z->p_right;
		}
		z->p_right->p_parent = z->p_parent;
	}
	free(z);
}

/* ?????????????????????????????????????????? */
void deleteHasTwoChildlenNode(NODE *z) {

	NODE *y; /* z????¬??????? */

	if (z->p_right != NULL) {
		z = z->p_right;
		while (z->p_left != NULL) {
			z = z->p_left;
		}
	}
	else {
		y = z->p_parent;
	}

	/* y????????????z????????????????????? */
	z->key = y->key;

	/* y????????? */
	if (y->p_left == NULL && y->p_right == NULL) {
		deleteHasNoChildNode(y);
	}
	else if (y->p_left != NULL && y->p_right == NULL ||
			y->p_left == NULL && y->p_right != NULL) {
		
		deleteHasOneChildNode(y);
	}
}