#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int key;
	struct node *parent,*left,*right;
}Node;

Node *root,*NIL;

void insert(int k);
Node* find(int k);
void delete(int k);
void inOrder(Node *x);
void preOrder(Node *x);

int main(){
	int i,n,x;	scanf("%d",&n);
	char com[10];

	for(i=0;i<n;i++){
		scanf("%s",com);
		if(com[0]=='i'){
			scanf("%d",&x);
			insert(x);

		}else if(com[0]=='p'){
			inOrder(root);
			printf("\n");
			preOrder(root);
			printf("\n");
		}else if(com[0]=='f'){
			scanf("%d",&x);
			if(find(x)!=NIL)printf("yes\n");
			else printf("no\n");
		}else{
			scanf("%d",&x);
			delete(x);
		}
	}
	return 0;
}

void insert(int k){
	Node *y=NIL, *x=root, *z;

	z=(Node*)malloc(sizeof(Node));

	z->key=k;	z->left=NIL;	z->right=NIL;

	while(x!=NIL){
		y=x;
		if(k < x->key){
			x=x->left;
		}else{
			x=x->right;
		}
	}
	z->parent=y;

	if(y==NIL)root=z;
	else{
		if(k < y->key){
			y->left = z;
		}else{
			y->right=z;
		}
	}
}

Node* find(int k){
	Node* p=root;

	while(p!=NIL){
		if(p->key==k){
			return p;
		}

		if(k < p->key)p=p->left;
		else p=p->right;
	}

	return NIL;
}

void delete(int k){
	Node *tgt=find(k),*del,*ch;

	if(tgt->left==NIL || tgt->right==NIL){
		del=tgt;
	}else{
		del=tgt->right;
		while(del->left!=NIL)del=del->left;
	}

	if(del->left!=NIL){
		ch=del->left;
	}else{
		ch=del->right;
	}
	if(ch!=NIL)	ch->parent=del->parent;

	if(del->parent==NIL){
		root=ch;
	}else{
		if(del==del->parent->left){
			del->parent->left=ch;
		}else{
			del->parent->right=ch;
		}
	}

	if(del!=tgt)tgt->key=del->key;

	free(del);
	return;
}

void inOrder(Node* x){
	if(x==NIL)return;
	inOrder(x->left);
	printf(" %d",x->key);
	inOrder(x->right);
}
void preOrder(Node* x){
	if(x==NIL)return;
	printf(" %d",x->key);
	preOrder(x->left);
	preOrder(x->right);
}

