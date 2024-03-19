#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Max 10

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

void preorder(link x){
  if(x==NULL)return;
	printf(" %d",x->key);
	preorder(x->left);
	preorder(x->right);
}

void inorder(link x){
	if(x==NULL)return;
	inorder(x->left);
	printf(" %d",x->key);
	inorder(x->right);
}

int find(link x,int key){
	if(x==NULL)return 0;
	if(x->key==key)return 1;
	if(x->key>key)return find(x->left,key);
	return find(x->right,key);
}

int search(link x){
	if(x->left==NULL)return x->key;
	return search(x->left);
}

link delete(link x,int key){
	if(x==NULL)return NULL;
	if(x->key==key){
		if(x->left==NULL && x->right==NULL)return NULL;
		else if(x->right==NULL){
			return x->left;
		}else if(x->left==NULL){
			return x->right;
		}else{
			x->key=search(x->right);
			x->right=delete(x->right,x->key);
		}
	}else if(x->key >key){
		x->left=delete(x->left,key);
	}else{
		x->right=delete(x->right,key);
	}
	return x;
}
int main(void){
	int h,i,key;
	char cmd[Max];
	link head=NULL,z;
	scanf("%d",&h);
	for(i=0;i<h;i++){
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
		}else if(!strcmp(cmd,"delete")){
			scanf("%d",&key);
			head=delete(head,key);
		}
	}
	return 0;
}

