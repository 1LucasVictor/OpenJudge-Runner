#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int key;
	struct node *parent,*left,*right;
}Node;

Node *root,*NIL;

void insert(int k);
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

		}else{
			inOrder(root);
			printf("\n");
			preOrder(root);
			printf("\n");
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

