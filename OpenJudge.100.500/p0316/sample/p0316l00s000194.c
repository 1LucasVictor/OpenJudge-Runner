#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int key;
	struct node	*left, *right, *parent;
}node;

node *root_node, *NIL;

//copy from the notes
void insert(int k) {
	node* y = NIL, * x = root_node, * z;
	z = (node*)malloc(sizeof(node));
	z->key = k;	z->left = NIL;	z->right = NIL;

	while (x != NIL) {
		y = x;
		if (k < x->key) {
			x = x->left;
		}
		else {
			x = x->right;
		}
	}
	z->parent = y;

	if (y == NIL) root_node = z;
	else {
		if (k < y->key) {
			y->left = z;
		}
		else {
			y->right = z;
		}
	}
}

void inOrder(node* input_node) {
	if (input_node == NIL)return;
	inOrder(input_node->left);
	printf(" %d", input_node->key); //from note put space before number
	inOrder(input_node->right);
}
void preOrder(node* input_node) {
	if (input_node == NIL)return;
	printf(" %d", input_node->key);
	preOrder(input_node->left);
	preOrder(input_node->right);
}

int main() {
	int i, size, number;
	scanf("%d", &size);
	char input[7];

	for (i = 0; i != size; i++) {
		scanf("%s", input);
		if (strcmp(input, "insert") == 0) {
			scanf("%d", &number);
			insert(number);
		}
		else {
			inOrder(root_node);
			printf("\n");
			preOrder(root_node);
			printf("\n");
		}
	}

	return 0;
}

