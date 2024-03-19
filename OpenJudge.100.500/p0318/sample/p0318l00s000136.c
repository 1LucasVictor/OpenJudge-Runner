#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int key;
	struct Node *left;
	struct Node *right;
}Node;

void insert(Node **p,int x){
	
	while((*p)!=NULL){
		
		if((*p)->key > x)
			p=&((*p)->left);
		else
			p=&((*p)->right);
			
	}
	
	*p=malloc(sizeof(Node));
	(*p)->key=x;
	(*p)->left=NULL;
	(*p)->right=NULL;
	
	return;
}

void Delete(Node **p,int x){
	Node *q=*p;
	Node **r;
	
	while(q!=NULL){
	
		if(q->key == x){
		
			if(q->left==NULL && q->right==NULL){
				free(q);
				*p=NULL;
				return;
			}
			else if(q->left==NULL && q->right!=NULL){
				//p=&(q->right);
				*p=q->right;
				return;
			}
			else if(q->left!=NULL && q->right==NULL){
				//p=&(q->left);
				*p=q->left;
				return;
			}
			else {
				r=&(q->right);
				q=*r;
				//printf("rkey %d\n",(*r)->key);
				while(q->left!=NULL){
					r=&(q->left);
					q=*r;
					/*q=q->left;
					*r=q;*/
				}
				(*p)->key=q->key;
				//printf("rkey %d\n",(*r)->key);
				Delete(r,q->key);
				return;
			}
			
		}	
		
		else if(q->key > x){
			p=&(q->left);
			q=*p;
		}
		else {
			p=&(q->right);
			q=*p;
		}
		
	}

	return;
}

void inorder(Node *p){
	
	if(p->left!=NULL)
		inorder(p->left);
	
	printf(" %d",p->key);
	
	if(p->right!=NULL)
		inorder(p->right);
	
	return;
}

void preorder(Node *p){
	
	printf(" %d",p->key);
	
	if(p->left!=NULL)
		preorder(p->left);
	
	if(p->right!=NULL)
		preorder(p->right);
	
	return;
}

void print(Node *root){
	inorder(root);
	printf("\n");
	
	preorder(root);
	printf("\n");
	
	return;
}

int find(Node *p,int x){

	while(p!=NULL){
		if(p->key == x)return 1;
		
		if(p->key > x)
			p=p->left;
		else
			p=p->right;
	}
	
	return 0;
	
}

int main(){
	int q,x;
	Node *root=NULL;
	char com[10];
	
	scanf("%d",&q);
	
	for(int i=0;i<q;i++){
		scanf("%s",com);
		
		if(com[0]=='i'){
			scanf("%d",&x);
			insert(&root,x);
		}
		
		else if(com[0]=='f'){
			scanf("%d",&x);
			if(find(root,x))
				printf("yes\n");
			else
				printf("no\n");
		}
		
		else if(com[0]=='p')
			print(root);
		
		else if(com[0]=='d'){
			scanf("%d",&x);
			Delete(&root,x);
		}
	}
	
	return 0;
	
}
