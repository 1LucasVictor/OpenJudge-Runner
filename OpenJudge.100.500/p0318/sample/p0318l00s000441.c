#include <stdio.h>
#include <stdlib.h>

typedef struct node_t {
	int key;
	struct node_t *parent;
	struct node_t *left;
	struct node_t *right;
} node;

node* newNode(int);
void print(node *);
void inorder(node *);
void preorder(node *);
void insert(int, node *);
node* find(int, node *);
int delete(int, node *);
void deleteNode(node *, node *);
void free_tree(node *);

int main(void)
{
	int i, m, k;
	char com[10];
	node *tree_root;
	
	tree_root = newNode(0);
	
	scanf("%d",&m);
	for (i=0; i<m; i++) {
		scanf("%s",com);
		if(com[0] == 'p') {
			print(tree_root->left);
		} else {
			scanf("%d",&k);
			if(com[0] == 'i') {
				insert(k, tree_root);
			} else if(com[0] == 'f') {
				if(find(k, tree_root) != NULL) {
					printf("yes\n");
				} else {
					printf("no\n");
				}
			} else if(com[0] == 'd') {
				if(delete(k, tree_root) == 0) printf("delete error!\n");
			}
		}
	}
	
	free_tree(tree_root);
	
	return 0;
}

node* newNode(int key)
{
	node *tmp;
	
	tmp = (node *)malloc(sizeof(node));
	if (tmp == NULL) exit(0);
	
	tmp->key = key;
	tmp->parent = NULL;
	tmp->left = NULL;
	tmp->right = NULL;
	
	return tmp;
}

void print(node *root)
{
	inorder(root);
	printf("\n");
	preorder(root);
	printf("\n");
}

void inorder(node *node)
{
	
	if(node->left != NULL) inorder(node->left);
	printf(" %d",node->key);
	if(node->right != NULL) inorder(node->right);
}

void preorder(node *node)
{
	printf(" %d",node->key);
	if(node->left != NULL) preorder(node->left);
	if(node->right != NULL) preorder(node->right);
}

void insert(int k, node *tree_root)
{
	node *x, *y, *z;
	
	z = newNode(k);
	y = tree_root;
	x = tree_root->left;
	while (x != NULL) {
		y = x;
		if(z->key < x->key) {
			x = x->left;
		} else {
			x = x->right;
		}
	}
	z->parent = y;
	if(y == tree_root || z->key < y->key) {
		y->left = z;
	} else {
		y->right = z;
	}
}

node* find(int k, node *tree_root) 
{
	node *x;
	
	x = tree_root->left;
	while (x->key != k) {
		if(x->key > k) {
			if(x->left == NULL) return NULL;
			x = x->left;
		} else {
			if(x->right == NULL) return NULL;
			x = x->right;
		}
	}
	return x;
}

int delete(int k, node *tree_root)
{
	node *x;
	
	x = find(k, tree_root);
	if(x==NULL) return 0;
	
	deleteNode(x, tree_root);
	return 1;
}

void deleteNode(node *x, node *tree_root)
{
	int isLeft;
	node *y;
	
	if(x == tree_root->left || x->key < x->parent->key) isLeft = 1;
	 else isLeft = 0;
	
	if(x->left==NULL && x->right==NULL) {
		if(isLeft) {
			x->parent->left = NULL;
		} else {
			x->parent->right = NULL;
		}
		free(x);
	} else if(x->right==NULL) {
		if(isLeft) {
			x->parent->left = x->left;
		} else {
			x->parent->right = x->left;
		}
		x->left->parent = x->parent;
		free(x);
	} else if(x->left==NULL) {
		if(isLeft) {
			x->parent->left = x->right;
		} else {
			x->parent->right = x->right;
		}
		x->right->parent = x->parent;
		free(x);
	} else {
		y = x->right;
		while(y->left!=NULL) {
			y = y->left;
		}
		x->key = y->key;
		deleteNode(y, tree_root);
	}
}

void free_tree(node *root)
{
	if(root->left != NULL) free_tree(root->left);
	if(root->right != NULL) free_tree(root->right);
	free(root);
}