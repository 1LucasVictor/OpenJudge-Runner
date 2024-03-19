#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#define MAX 10000000

struct  node {
	int  key;
	struct node *parent;
	struct node *right;
	struct node *left; 
} ;
typedef struct node * Node;

Node root, noParent;

void insert (int k) {
	 Node y = noParent;
	 Node x = root;
	 Node z;
	
	z = malloc(sizeof(struct node));
	z->key = k;
	z->left = noParent;
	z->right = noParent;
	
	while(x != noParent){
		y = x;
		if(z->key < x->key) {
			x = x->left;
		} else {
			x = x->right;
		}
	}
		z->parent = y;
		
		if(y == noParent) {
			root = z;
		} else {
			if (z->key < y->key) {
				y->left = z;
			} else y->right = z;
	}
}

void inorder (Node x){
	if(x == noParent) return;
	inorder(x->left);
	printf(" %d",x->key);
	inorder(x->right);
}

void preorder (Node x){
	if(x == noParent) return;
	printf(" %d",x->key);
	preorder(x->left);
	preorder(x->right);
}

int main(){
  int i,n,a;
  char sentence[20];

	scanf("%d", &n);
	for(i=0;i < n;i++){
		scanf("%s",sentence);
		if( strcmp(sentence, "insert") == 0) {
			scanf("%d",&a);
			insert(a);
		} else if(strcmp(sentence,"print") == 0) {
			inorder(root);
			printf("\n");
			preorder(root);
			printf("\n");
		}
	}	
	return 0;
}
