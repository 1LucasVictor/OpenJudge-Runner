#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 500000

typedef struct _Node {
	long key;
	struct _Node *parent;
	struct _Node *left;
	struct _Node *right;
} Node;

Node *root=NULL;

Node *make_node(long);
void insert_node(long);
void delete_node(long);
void find_node(long);
void preorder(Node*);
void inorder(Node*);

int main() {
	int i;

	int n;
	long key;
	char command[10];
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		scanf("%s", command);
		if(strcmp(command, "insert") == 0){
            scanf("%ld", &key);
            insert_node(key);
        } else if(strcmp(command, "print") == 0){
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        } else if(strcmp(command, "find") == 0){
            scanf("%ld", &key);
            find_node(key);
        } else if(strcmp(command, "delete") == 0){
            scanf("%ld", &key);
            delete_node(key);
        }
	}
	return 0;
}

Node *make_node(long key) {
	Node *node = malloc(sizeof *node);
	node->key = key;
	node->left = NULL;
	node->right = NULL;
	node->parent = NULL;
	return node;
}

void insert_node(long key) {
	Node *p=NULL, *x=root;
    while (x != NULL) {
        p = x;
        if(key < x->key) x = x->left;
        else x = x->right;
    }
	if(p == NULL) root = make_node(key);
	else if(key < p->key) {
		p->left = make_node(key);
		p->left->parent = p ;
    } else {
		p->right = make_node(key);
		p->right->parent = p ;
	}
}

void delete_node(long key){
	long temp;
	Node *node=root;
	while(node!=NULL){
		if(node->key==key){
			if(node->left!=NULL&&node->right==NULL){
				if(node->parent->left==node) {
					node->parent->left=node->left;
					node->left->parent=node->parent;
				}
				else {
					node->parent->right=node->left;
					node->left->parent=node->parent;
				}
			}
			else if(node->left==NULL&&node->right!=NULL){
				if(node->parent->left==node) {
					node->parent->left=node->right;
					node->right->parent=node->parent;
				}
				else {
					node->parent->right=node->right;
					node->right->parent=node->parent;
				}
			}
			else if(node->left==NULL&&node->right==NULL){
				if(node->parent->left==node) node->parent->left=NULL;
				else node->parent->right=NULL;
			}
			else{
				temp = node->key;
				node->key = node->right->key;
				node->right->key = temp;
		       	key = node->right->key;
				node=node->right;
				continue;
			}
			break;
		}
		else if(key<node->key) node=node->left;
		else node=node->right;
	}
}

void find_node(long key) {
    Node *x=root;
    while (x != NULL) {
        if(x->key == key) {
            printf("yes\n");
            return;
        } else {
            if(key < x->key) x = x->left;
            else x = x->right;
        }
    }
    printf("no\n");
}

void preorder(Node *node)
{
	if (node == NULL) return;
	printf(" %ld", node->key);
	preorder(node->left);
	preorder(node->right);
}

void inorder(Node *node)
{
	if (node == NULL) return;
	inorder(node->left);
	printf(" %ld", node->key);
	inorder(node->right);
}

