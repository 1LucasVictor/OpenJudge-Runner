#include<stdio.h>
#include<stdlib.h>

struct node {
	struct node *right;
	struct node *left;
	struct node *parent;
	int key;
};

typedef struct node * Node;
#define NIL NULL
void inorder(Node);
void preorder(Node);
void insert(int);

Node root;

int main() {
	int n, i, x;
	char com[20];

	scanf("%d", &n);

	for (x = 0; x < n; x++) {
		scanf("%s", com);

		if (com[0] == 'i') {
			scanf("%d", &i);
			insert(i);
		}
		else {
			if (root != NIL) {
				inorder(root);
				printf("\n");
				preorder(root);
				printf("\n");
			}
		}
	}

	return 0;
}


void insert(int in) {
	Node new, work, move;

	new = (Node)malloc(sizeof(struct node));
	new->key = in;
	new->right = NIL;
	new->left = NIL;

	work = NIL;
	move = root;
	while (move != NIL) {
		work = move;
		if (move->key > in) {
			move = move->right;
		}
		else {
			move = move->left;
		}
	}

	new->parent = work;
	if (work == NIL) root = new;
	else if (work->key > in) work->right = new;
	else work->left = new;

}


void inorder(Node x) {
	if (x->right != NIL) inorder(x->right);
	printf(" %d", x->key);
	if (x->left != NIL) inorder(x->left);
}


void preorder(Node x) {
	printf(" %d", x->key);
	if (x->right != NIL) preorder(x->right);
	if (x->left != NIL) preorder(x->left);
}
