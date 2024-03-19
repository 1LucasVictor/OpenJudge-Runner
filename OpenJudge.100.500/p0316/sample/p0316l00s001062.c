/* *	Argorithms and Data Structures
 *	Lectuire 8 
 *	Binary Search Tree I
 */

#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

typedef struct Node{
	int key;
	struct Node *parent;
	struct Node *left;
	struct Node *right;
}Node;

void insert (Node *, int);
void print (Node *);
void printInorderTree (Node *);
void printPreorderTree (Node *);

struct Node *NIL, *root;

int main (void) {
	int i, m, k;
	char order[10];

	scanf("%d", &m);
	
	for (i=0; i<m; i++) {
		scanf("%s ", order);
		if( !strcmp ( order, "insert") ){
			scanf("%d", &k);
			insert (root, k);
		}
		else
			print(root);
	}
	return 0;
}

void insert ( Node *T, int key){
	Node *x = root,
		*y = NIL,
		*z;

	z = (Node*) malloc( sizeof(Node) );
	z->key = key;
	z->left = z->right = NIL;

	while (x != NIL) {
		y = x;
		if (z->key < x->key) 
			x = x->left;
		else
			x = x->right;
	}
	z->parent = y;

	if ( y == NIL)
		root = z;
	else if (z->key < y->key)
		y->left = z;
	else
		y->right = z;
}

void print(Node *T){
	printInorderTree (T);
	printf("\n");
	printPreorderTree (T);
	printf("\n");
}

void printInorderTree (Node* x) {
	if (x != NIL){
		printInorderTree (x->left);
		printf(" %d", x->key);
		printInorderTree (x->right);
	}
}

void printPreorderTree (Node* x) {
	if (x != NIL){
		printf(" %d", x->key);
		printPreorderTree (x->left);
		printPreorderTree (x->right);
	}
}