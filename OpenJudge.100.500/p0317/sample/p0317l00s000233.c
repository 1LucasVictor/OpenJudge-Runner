#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define mymalloc(p,n) {p = malloc((n)*sizeof(*p));if ((p)==NULL) {printf("not enough memory?\n"); exit(1);};}

typedef struct node{
	struct node *parent;
	struct node *right;
	struct node *left;
	long key;
}node;

typedef struct{
	struct node *root;
}tree;

node *createNode(long n){
	node *node;
	mymalloc(node,1);
	node->parent=NULL;
	node->right=NULL;
	node->left=NULL;
	node->key=n;
	return node;
}

void insert(tree *T, node *z){
	node *x,*y;
	y=NULL;
	x=T->root;
	while(x!=NULL){
		y=x;
		if(z->key<x->key){
			x=x->left;
		}else{
			x=x->right;
		}
	}
	z->parent=y;
	if(y==NULL){
		T->root=z;
	}else{
	if(z->key<y->key){
		y->left=z;
	}else{
		y->right=z;
	}}
}

void findPrint(tree *T,long key){
	node *x;
	x=T->root;
	while(x!=NULL){
		if(key==x->key){
			puts("yes");
			return;
		}
		if(key<x->key){
			x=x->left;
		}else{
			x=x->right;
		}
	}
	puts("no");
}
void preorder(node *root){
	printf(" %ld",root->key);
	if(root->left!=NULL){
		preorder(root->left);
	}
	if(root->right!=NULL){
		preorder(root->right);
	}
}

void inorder(node *root){
	if(root->left!=NULL){
		inorder(root->left);
	}
	printf(" %ld",root->key);
	if(root->right!=NULL){
		inorder(root->right);
	}
}


void freeNode(node *root){
	if(root->left!=NULL){
		freeNode(root->left);
	}
	if(root->right!=NULL){
		freeNode(root->right);
	}
	free(root);
}

void printTree(node *root){
	inorder(root);
	printf("\n");
	preorder(root);
	printf("\n");
}

main(){
	long i,n,m;
	tree *T;
	node *obj;
	char s[10];
	mymalloc(T,1);
	T->root=NULL;
	scanf("%ld",&n);
	for(i=0;i<n;i++){
		scanf(" %s",s);
		if(strcmp(s,"insert")==0){
			scanf(" %ld",&m);
			obj=createNode(m);
			insert(T,obj);
		}else{
		if(strcmp(s,"print")==0){
			printTree(T->root);
		}else{
		if(strcmp(s,"find")==0){
			scanf(" %ld",&m);
			findPrint(T,m);
		}}}
	}
	freeNode(T->root);
	free(T);
	return 0;
}