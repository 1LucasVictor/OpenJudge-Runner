#include<stdio.h>
#include<stdlib.h>
#define mymalloc(p,n) {p = malloc((n)*sizeof(*p));if ((p)==NULL) {printf("not enough memory?\n"); exit(1);};}

typedef struct node{
	struct node *parent;
	struct node *right;
	struct node *left;
	int id;
	int degree;
	int depth;
	int height;
	int sibling;
}node;

node *createNode(){
	node *node;
	mymalloc(node,1);
	node->parent=NULL;
	node->right=NULL;
	node->left=NULL;
	node->id=0;
	node->degree=0;
	node->depth=0;
	node->height=0;
	return node;
}

node **readNode(int n){
	int i,id,left,right;
	node **T;
	mymalloc(T,n);
	for(i=0;i<n;i++){
		T[i]=createNode();
	}
	for(i=0;i<n;i++){
		scanf(" %d %d %d",&id,&left,&right);
		T[id]->id=id;
		if(left!=-1){
			T[id]->left=T[left];
			T[left]->parent=T[id];
		}
		if(right!=-1){
			T[id]->right=T[right];
			T[right]->parent=T[id];
		}
	}
	return T;
}

node *returnRoot(node **T,int n){
	int i;
	for(i=0;i<n;i++){
		if(T[i]->parent==NULL){
			return T[i];
		}
	}
}

void preorder(node *root,int flag){
	if(root->parent!=NULL&&root->parent->left!=NULL&&root->parent->left==root&&flag==1){
		flag=0;
	}
	if(flag==1&&root->left==NULL&&root->right==NULL){
		printf("%d\n",root->id);
		return;
	}
	printf("%d ",root->id);
	if(root->left!=NULL){
		preorder(root->left,flag);
	}
	if(root->right!=NULL){
		preorder(root->right,flag);
	}
}

void inorder(node *root,int flag){
	if(root->parent!=NULL&&root->parent->left!=NULL&&root->parent->left==root&&flag==1){
		flag=0;
	}
	if(flag==1&&root->left==NULL&&root->right==NULL){
		printf("%d\n",root->id);
		return;
	}
	if(root->left!=NULL){
		inorder(root->left,flag);
	}
	printf("%d ",root->id);
	if(root->right!=NULL){
		inorder(root->right,flag);
	}
}

void postorder(node *root){
	if(root->left!=NULL){
		postorder(root->left);
	}
	if(root->right!=NULL){
		postorder(root->right);
	}
	if(root->parent!=NULL){
		printf("%d ",root->id);
	}else{
		printf("%d\n",root->id);
	}
}

void freeNode(node **T,int n){
	int i;
	for(i=0;i<n;i++){
		free(T[i]);
	}
	free(T);
}

main(){
	int n;
	node **T;
	node *root;
	scanf("%d",&n);
	T=readNode(n);
	root=returnRoot(T,n);
	printf("Preorder\n ");
	preorder(root,1);
	printf("Inorder\n ");
	inorder(root,1);
	printf("Postorder\n ");
	postorder(root);
	freeNode(T,n);
	return 0;
}