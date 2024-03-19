#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 500000

int n;

struct Tree{
	int key;
	struct Tree *parent,*left,*right;
};
struct Tree *NILL,*root;

void find(struct Tree *root,int key){
	int flag =0;
	while(root!=NILL){
		if(root->key > key)root = root->left;
		else if(root->key == key) {
			printf("yes\n");
			flag =1;
			break;
		}
		else root = root->right;
	}
	if(!flag)printf("no\n");
}

struct Tree * find1(struct Tree *root,int key){
	int flag =0;
	while(root!=NILL){
		if(root->key > key)root = root->left;
		else if(root->key == key) {
			flag =1;
			break;
		}
		else root = root->right;
	}
	if(!flag)return NILL;
	return root;
}

void insert(struct Tree *z){
	struct Tree *x,*y;
	y = NILL;
	x = root;
	while(x != NILL){
		y = x;
		if(z->key < x->key) x = x->left;
		else x = x->right;
	}
	z->parent = y;
	if(y == NILL)  {
		root = z;
	}
	else if(z->key < y->key) y->left = z;
	else y->right = z;
}

struct Tree * tm(struct Tree *z){
	while(z->left !=NILL) z = z->left;
	return z;
}

struct Tree * succecer(struct Tree *z){
	if(z->right != NILL) return tm(z->right);
	struct Tree *y = z->parent;
	while(y!=NILL && z==y->right){
		z=y;
		y = y->parent;
	}
	return y;
}

void delete(struct Tree *z){
	struct Tree *y,*x;
	if(z->left == NILL || z->right == NILL) y = z;
	else y = succecer(z);
	if(y->left != NILL){
		x = y->left;
	}
	else{
		x = y->right;
	}
	if(x!=NILL){
		x->parent = y->parent;
	}
	if(y->parent == NILL){
		root = x;
	}
	else{
		if(y==y->parent->left){
			y->parent->left = x;
		}
		else{
			y->parent->right = x;
		}
	}
	if(y!=z){
		z->key = y->key;
	}
}

void mid(struct Tree *root){
	if(root == NILL) return;
	mid(root->left);
	printf(" %d", root->key);
	mid(root->right);
}

void inorder(struct Tree *root){
	if(root == NILL) return;
	printf(" %d",root->key);
	inorder(root->left);
	inorder(root->right);
}

void print(){
	struct Tree *r;
	r = root;
	mid(r);
	printf("\n");
	inorder(r);
	printf("\n");
}

int main(){
	struct Tree *t;
	scanf("%d",&n);
	int i;
	int key;
	char instruct[7];
	for(i=0;i<n;i++){
		scanf("%s",instruct);
		if(!strcmp(instruct,"insert")){
			scanf("%d",&key);
			t = (struct Tree *)malloc(sizeof(struct Tree));
			t->key = key;
			t->right = NILL;
			t->left = NILL;
			//T[i]->key  = key;
			insert(t);
		}
		else if(!strcmp(instruct,"find")){
			scanf("%d",&key);
			find(root,key);
		}
		else if(!strcmp(instruct,"delete")){
			scanf("%d",&key);
			delete(find1(root,key));
		}
		else print();
	}
	return 0;
}