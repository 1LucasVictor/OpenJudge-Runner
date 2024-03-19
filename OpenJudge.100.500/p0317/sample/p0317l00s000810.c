#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define cmdMax 10

typedef struct node *link;
struct node{
	int key;
	link left,right;
};

link insert(link head,link z){
	link y=NULL;
	link x=head;
	
	while(x!=NULL){
		y=x;
		if(z->key < x->key)x=x->left;
		else x=x->right;
	}
	
	if(y==NULL)head=z;
	else if(z->key < y->key)y->left=z;
	else y->right=z;
	return head;
}

void preorder(link u){
	if(u==NULL)return;
	printf(" %d",u->key);
	preorder(u->left);
	preorder(u->right);
}

void inorder(link u){
	if(u==NULL)return;
	inorder(u->left);
	printf(" %d",u->key);
	inorder(u->right);
}

int find(link u,int key){
	if(u==NULL)return 0;
	if(u->key==key)return 1;
	if(u->key>key)return find(u->left,key);
	return find(u->right,key);
}

int main(void){
	int m,i,key;
	char cmd[cmdMax];
	link head=NULL,z;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%s",cmd);
		if(!strcmp(cmd,"insert")){
			scanf("%d",&key);
			z = malloc(sizeof(*z));
			z->key=key;z->left=NULL;z->right=NULL;
			head=insert(head,z);
		}else if(!strcmp(cmd,"print")){
			inorder(head);
			printf("\n");
			preorder(head);
			printf("\n");
		}else if(!strcmp(cmd,"find")){
			scanf("%d",&key);
			if(find(head,key)!=0)printf("yes\n");
			else  printf("no\n");
		}
	}
	return 0;
}