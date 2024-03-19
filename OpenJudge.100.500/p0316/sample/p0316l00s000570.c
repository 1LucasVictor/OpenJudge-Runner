#include<stdio.h>
#include<stdlib.h>

typedef struct TREE{
	int id;
	struct TREE *parent;
	struct TREE *child[2];
	int depth;
	int height;
}Tree;

void insert(Tree *root, Tree *z){
	Tree *y = NULL;
	Tree *x = root;
	while( x != NULL ){
		y = x;
		if( z->id < x->id ){
			x = x->child[0];
		}else{
			x = x->child[1];
		}
	}
	z->parent = y;
	if( y == NULL ){
		root = z;
	}else if( z->id < y->id ){
		y->child[0] = z;
	}else{
		y->child[1] = z;
	}
	return;
}

int setDepthHeight(Tree *nt, int depth){
	if( nt == NULL ){ return -1; }
	nt->depth = depth;
	int lh = setDepthHeight(nt->child[0], depth+1);
	int rh = setDepthHeight(nt->child[1], depth+1);
	nt->height = (lh>rh?lh:rh) + 1;
	return nt->height;
}

void preOrder(Tree *tr){
	if( tr == NULL ){ return; }
	printf(" %d", tr->id);
	preOrder(tr->child[0]);
	preOrder(tr->child[1]);
	return;
}

void inOrder(Tree *tr){
	if( tr == NULL ){ return; }
	inOrder(tr->child[0]);
	printf(" %d", tr->id);
	inOrder(tr->child[1]);
	return;
}

void postOrder(Tree *tr){
	if( tr == NULL ){ return; }
	postOrder(tr->child[0]);
	postOrder(tr->child[1]);
	printf(" %d", tr->id);
	return;
}

void print(Tree *root){
	inOrder(root);
	printf("\n");
	preOrder(root);
	printf("\n");
	return;
}

int main(){
	int n, id, i, j;
	char str[128];
	Tree *root = NULL, *temp = NULL;
	scanf("%d", &n);
	for( i = 0; i < n; i++ ){
		scanf("%s", str);
		if( strcmp(str, "insert") == 0 ){
			scanf("%d", &id);
			scanf("%c", &str[0]);
			temp = (Tree*)malloc(sizeof(Tree));
			temp->id = id;
			temp->parent = NULL;
			temp->child[0] = NULL;
			temp->child[1] = NULL;
			if( root == NULL ){
				root = temp;
			}else{
				insert(root, temp);
			}
		}else if( strcmp(str, "print") == 0 ){
			print(root);
		}
	}
	setDepthHeight(root, 0);
	return 0;
}