#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	struct node *left;
	struct node *right;
	struct node *parent;
	int key;
} node_t;

struct node *root = NULL;

int n;

void constructTree(int);
struct node* newNode(int);
void insert(struct node*);

void printInorder(struct node*);
void printPreorder(struct node*);

int main()
{
	int i, insertCount = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		char cmd[10];
		scanf("%s", cmd);
		if (cmd[0] == 'i') {
			int newKey;
			scanf("%d", &newKey);
			(insertCount == 0) ? constructTree(newKey) : insert(newNode(newKey));
			insertCount++;
		}
		else {
			printInorder(root);
			printf("\n");
			printPreorder(root);
			printf("\n");
		}
	}
	return 0;
}

void constructTree(int insertValue) {
	root = newNode(insertValue);
}

struct node* newNode(int insertValue) {
	struct node *newNode = (struct node*) malloc(sizeof(struct node));
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = NULL;
	newNode->key = insertValue;

	return(newNode);
}

void insert(struct node *newNode) {
	struct node *y = (struct node*) malloc(sizeof(struct node));
	struct node *x = root;

	while (x != NULL) {
		y = x;
		if (newNode->key < x->key) {
			x = x->left;
		}
		else {
			x = x->right;
		}
	}
	newNode->parent = y;

	if (y == NULL) {
		root = newNode;
	}
	else if (newNode->key < y->key) {
		y->left = newNode;
	}
	else {
		y->right = newNode;
	}
}

void printInorder(struct node *x) {
	if (x != NULL) {
		printInorder(x->left);
		printf(" %d", x->key);
		printInorder(x->right);
	}
}

void printPreorder(struct node *x) {
	if (x != NULL) {
		printf(" %d", x->key);
		printPreorder(x->left);
		printPreorder(x->right);
	}
}

