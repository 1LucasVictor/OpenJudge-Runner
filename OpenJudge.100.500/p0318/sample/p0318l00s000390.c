#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
	int key;
	struct node *parent;
	struct node *left;
	struct node *right;
}Node;

Node *root=NULL;

Node *make_node(int key);
void insert_node(int key);
void delete_node(int key);
int findk(int key, Node *node);
void preorder(Node *node);
void inorder(Node *node);

int main()
{
	int N, key, ans;
	char str[10];
	char str1[] = "insert", str2[] = "print", str3[] = "find", str4[] = "delete";

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%s", str);

		if (strcmp(str, str1) == 0)
		{
			scanf("%d", &key);
			insert_node(key);
		}
		else if(strcmp(str, str2) == 0){
			inorder(root);
			printf("\n");
			preorder(root);
			printf("\n");
		}
		else if(strcmp(str, str3) == 0){
			scanf("%d", &key);
			ans=findk(key, root);
			if(ans==1) printf("yes\n");
			else printf("no\n");
		}
		else if(strcmp(str, str4) == 0){
			scanf("%d", &key);
			delete_node(key);
		}
	}
	return 0;
}

Node *make_node(int key)
{
	Node *node = malloc(sizeof *node);
	node->key = key;
	node->left = NULL;
	node->right = NULL;
	node->parent = NULL;
	return node;
}

void insert_node(int key)
{
	if(root == NULL) {
		root = make_node(key);
		return;
	}
	Node *p=NULL, *x=root;
    while (x != NULL) {
        p = x;
        if(key < x->key) x = x->left;
        else x = x->right;
    }
	if (key < p->key) {
		p->left = make_node(key);
		p->left->parent = p ;
    } else {
		p->right = make_node(key);
		p->right->parent = p ;
	}
}

void delete_node(int key){
	int temp;
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
				printf("---\n");
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

int findk(int key, Node *node){
	while(node!=NULL){
		if(node->key==key) return 1;
		else if(key<node->key) node=node->left;
		else node=node->right;
	}
	return 0;
}

void preorder(Node *node)
{
	if (node == NULL) return;
	printf(" %d", node->key);
	preorder(node->left);
	preorder(node->right);
}

void inorder(Node *node)
{
	if (node == NULL) return;
	inorder(node->left);
	printf(" %d", node->key);
	inorder(node->right);
}

