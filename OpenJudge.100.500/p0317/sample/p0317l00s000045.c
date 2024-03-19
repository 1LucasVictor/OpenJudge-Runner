//Binary Search Tree 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node{
	int key;
	struct Node *parent;
	struct Node *left;
	struct Node *right;
}Node;

void Insert(int);
void Inorder(Node*);
void Preorder(Node*);
Node * Find(Node*,int);

Node *Root;


int main(){
	int m,i,k;
	char order[8];


	//input
	scanf("%d",&m);

	for(i=0;i<m;i++){
		scanf("%s",order);


		if(!strcmp("find",order)){
			scanf("%d",&k);
			Node *t=Find(Root,k);
			if(t!=NULL){
				printf("yes\n");
			}
			else{
				printf("no\n");
			}
		}
		if(!strcmp("insert",order)){
			scanf("%d",&k);
			Insert(k);
		}
		else if(!strcmp("print",order)){
			Inorder(Root);
			printf("\n");
			Preorder(Root);
			printf("\n");
		}
	}
	return 0;
}


void Insert(int k){
	Node *y=NULL;
	Node *x=Root;
	Node *new;

	new=(Node *)malloc(sizeof(Node));
	new->key=k;
	new->left=NULL;
	new->right=NULL;

	while(x != NULL){
		y=x;
		if(new->key < x->key){
			x=x->left;
		}
		else{
			x=x->right;
		}
	}
	new->parent=y;
	if(y==NULL){
		Root=new;
	}
	else if(new->key < y->key){
		y->left=new;
	}
	else{
		y->right=new;
	}
}


//Torigake-zyun (root-> L -> R)
void Inorder(Node *u){
	if(u==NULL){
		return;//todo
	}
	Inorder(u->left);
	printf(" %d",u->key);
	Inorder(u->right);
}


//Ikigake-zyun(L -> root -> R)
void Preorder(Node *u){
	if(u==NULL){
		return;//todo
	}

	printf(" %d",u->key);
	Preorder(u->left);
	Preorder(u->right);
}


Node * Find(Node *u,int k){
	while(u!=NULL && k!=u->key){
		if(k<u->key){
			u=u->left;
		}
		else{
			u=u->right;
		}
	}
	return u;
}






//2時までかかった…つらTT
//アルゴ単位ください(..)

