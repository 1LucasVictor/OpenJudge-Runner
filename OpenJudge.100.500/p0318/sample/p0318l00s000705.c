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

struct node* found(int);
struct node* successor(struct node *);
struct node* minimum(struct node *);
void deleteNode(struct node *);
void transplant(struct node *, struct node *);

void printInorder(struct node*);
void printPreorder(struct node*);

int main()
{
	int i, insertCount = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		char cmd[10];
		scanf("%s", cmd);

		if (cmd[0] == 'p') {
			printInorder(root);
			printf("\n");
			printPreorder(root);
			printf("\n");
			continue;
		}

		int key;
		scanf("%d", &key);
		if (cmd[0] == 'i') {
			(insertCount == 0) ? constructTree(key) : insert(newNode(key));
			insertCount++;
		}
		else if (cmd[0] == 'f') {
			(found(key) != NULL) ? printf("yes\n") : printf("no\n");
		}
		else {
			struct node *deleteKey = found(key);
			if (deleteKey != NULL) deleteNode(deleteKey);
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

struct node* found(int targetKey) {
	struct node* current = (struct node *)malloc(sizeof(struct node));
	current = root;
	while (targetKey != current->key) {
		if (targetKey < current->key) {
			current = current->left;
		}
		else {
			current = current->right;
		}

		if (current == NULL) return NULL;
	}
	return current;
}

struct node* minimum(struct node *fromKey) {
	struct node *min = (struct node *)malloc(sizeof(struct node));
	min = fromKey;
	while (min->left != NULL) min = min->left;
	return min;
}

struct node* successor(struct node *targetKey) {
	if (targetKey->right != NULL) return minimum(targetKey);

	struct node *current = (struct node *)malloc(sizeof(struct node));
	struct node *parent = (struct node *)malloc(sizeof(struct node));
	current = targetKey;
	parent = current->parent;

	while (parent != NULL && current == parent->right) {
		current = parent;
		parent = parent->parent;
	}
	return parent;
}

void deleteNode(struct node *deleteKey) {
	struct node *x = (struct node *)malloc(sizeof(struct node));
	struct node *y = (struct node *)malloc(sizeof(struct node));
	if (deleteKey->left == NULL) {
		transplant(deleteKey, deleteKey->right);
	}
	else if (deleteKey->right == NULL) {
		transplant(deleteKey, deleteKey->left);
	}
	else {
		y = minimum(deleteKey->right);
		if (y->parent != deleteKey) {
			transplant(y, y->right);
			y->right = deleteKey->right;
			y->right->parent = y;
		}
		transplant(deleteKey, y);
		y->left = deleteKey->left;
		y->left->parent = y;
	}
}

void transplant(struct node* first, struct node* second) {
	if (first->parent == NULL) root = second;
	else if (first == first->parent->left) first->parent->left = second;
	else first->parent->right = second;

	if (second != NULL) second->parent = first->parent;
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

