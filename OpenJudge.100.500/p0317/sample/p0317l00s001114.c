#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int key;
	struct node *left;
	struct node *right;
}node;

void insert(node **p,int x){
	node *new=malloc(sizeof(node));
	new->key=x;
	new->left=NULL;
	new->right=NULL;
	
	while((*p)!=NULL){
		if((*p)->key > x)
			p=&((*p)->left);
		else
			p=&((*p)->right);
	}
	(*p)=new;
	
	return;
}

int find(node *p,int x){

	while(p!=NULL){
		if(p->key == x)return 1;
		
		if(p->key > x)
			p=p->left;
		else
			p=p->right;
	}
	
	return 0;
	
}

void inorder(node *p){
	
	if(p->left!=NULL)
		inorder(p->left);
	
	printf(" %d",p->key);
	
	if(p->right!=NULL)
		inorder(p->right);
	
	return;
}

void preorder(node *p){
	
	printf(" %d",p->key);
	
	if(p->left!=NULL)
		preorder(p->left);
	
	if(p->right!=NULL)
		preorder(p->right);
	
	return;
}

void print(node *root){
	inorder(root);
	printf("\n");
	
	preorder(root);
	printf("\n");
	
	return;
}

node * Delete(node *p,int x){
	
	if(p->key == x){
	
		if(p->left==NULL && p->right==NULL)/*葉*/
			return NULL;
		
		if(p->left==NULL || p->right==NULL){/*子1つ*/
			if(p->left!=NULL)
				return p->left;
			else
				return p->right;
		}
		
		node **q=&(p->right);
		while((*q)->left!=NULL)
			q=&((*q)->left);
		p->key=(*q)->key;
		(*q)=Delete((*q),(*q)->key);
		return p;
	
	}
	
	if(p->key > x)
		p->left=Delete(p->left,x);
	else
		p->right=Delete(p->right,x);
	
	return p;
	
}

int main(){
	int n,i,x;
	node *root=NULL;
	char com[10];
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%s",com);
		
		switch(com[0]){
			case 'i':scanf("%d",&x);
					 insert(&root,x);
					 break;
			
			case 'f':scanf("%d",&x);
					 if(find(root,x))
					 	printf("yes\n");
					 else
					 	printf("no\n");
					 break;
					 
			case 'd':scanf("%d",&x);
					 root=Delete(root,x);
					 break;
					 
			case 'p':print(root);
					 break;
		}
	}
	
	return 0;
	
}
