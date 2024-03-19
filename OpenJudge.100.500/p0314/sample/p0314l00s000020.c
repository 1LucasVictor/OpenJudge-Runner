#include <stdio.h>
#include <stdlib.h>

typedef struct tnode tnode;

typedef struct{
	tnode *root;
}Tree;

struct tnode {
	int key;
	tnode *left, *right;
	tnode *p;
};

void print_preorder_rec(tnode *node){
	printf(" %d", node->key);
	if(node->left != NULL) print_preorder_rec(node->left);
	if(node->right != NULL) print_preorder_rec(node->right);
}

void print_preorder(Tree *tree) {
	print_preorder_rec(tree->root);
	printf("\n");
}

void print_inorder_rec(tnode *node){
	if(node->left != NULL) print_inorder_rec(node->left);
	printf(" %d", node->key);
	if(node->right != NULL) print_inorder_rec(node->right);
}

void print_inorder(Tree *tree) {
	print_inorder_rec(tree->root);
	printf("\n");
}

void print_postorder_rec(tnode *node){
	if(node->left != NULL) print_postorder_rec(node->left);
	if(node->right != NULL) print_postorder_rec(node->right);
	printf(" %d", node->key);
}

void print_postorder(Tree *tree) {
	print_postorder_rec(tree->root);
	printf("\n");
}

int main(void) {
	int n, i, j, l, r;
	scanf("%d", &n);
	Tree tree;
	tnode *nodes;
	nodes = malloc(n * sizeof(tnode));
	for (i = 0; i < n; i++) nodes[i].p = NULL;
	for (i = 0; i < n; i++) {
		scanf("%d %d %d", &j, &l, &r);
		nodes[j].key = j;
		if (l == -1) {
			nodes[j].left = NULL;
		}
		else {
			nodes[j].left =  &nodes[l];
			nodes[l].p = &nodes[j];
		}
		if (r == -1) {
			nodes[j].right = NULL;
		}
		else {
			nodes[j].right =  &nodes[r];
			nodes[r].p = &nodes[j];
		}
		nodes[j].right = (r == -1) ? NULL : &nodes[r];
	}
	for (i = 0; i < n; i++) {
		if (nodes[i].p == NULL) {
			tree.root = &nodes[i];
			break;
		}
	}
	printf("Preorder\n");
	print_preorder(&tree);
	printf("Inorder\n");
	print_inorder(&tree);
	printf("Postorder\n");
	print_postorder(&tree);
	return 0;
}