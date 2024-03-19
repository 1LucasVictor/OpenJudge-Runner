#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node {
	int key;
	struct Node* parent;
	struct Node* left;
	struct Node* right;
};

typedef struct Node * NodePointer;

void insert( NodePointer t , int z){
	NodePointer x;
	if ( t -> key <= z){
		if  ( t -> right  == NULL){
			x =  (NodePointer) malloc (sizeof(struct Node));
			x -> key = z;
			x -> right = NULL;
			x -> left = NULL;
			t -> right = x;
		}else {
			insert ( t -> right , z);
		}

	}else {
		if  ( t -> left  == NULL){
			x =  (NodePointer) malloc (sizeof(struct Node));
			x -> key = z;
			x -> right = NULL;
			x -> left = NULL;
			t -> left = x;
		}else {
			insert ( t -> left , z);
		}
	}
};

void search ( NodePointer t, int tag){
	int flag = 0;
	while ( t != NULL){
		if ( t -> key == tag){flag = 1; break;}
		else if ( t -> key >= tag){
			t = t -> left;
		}else {
			t = t -> right;
		}
	}
	if (flag == 0 ){ printf("no\n");
	}else if (flag == 1){printf("yes\n");}
};

void preorder ( NodePointer t){
	if ( t == NULL ){ return; }
	printf(" %d", t -> key);
	preorder( t -> left);
	preorder( t -> right);
};

void inorder (NodePointer t){
	if ( t == NULL ){ return; }
	inorder( t -> left);
	printf(" %d", t -> key);
	inorder( t -> right);
};

void postorder (NodePointer t){
	if ( t == NULL ){ return; }
	postorder( t -> left);
	postorder( t -> right);
	printf(" %d", t -> key);
};


int main (){
	int kazu;
	scanf("%d\n",&kazu);

	NodePointer tree = (NodePointer) malloc (sizeof(struct Node));

	char input [8];
	int k;

	for ( int i = 0; i  < kazu; i++){
		scanf("%s" ,&input);

		if ( strcmp( input , "insert") == 0 ){
			scanf("%d\n",&k);
			if ( i == 0)
			{
			tree -> key = k;
			tree -> right = NULL;
			tree -> left = NULL;
			}
			else {insert(tree , k);
			}
		}else if ( strcmp( input , "find") == 0 ){
			scanf("%d\n",&k);
			search( tree , k);
		}else {
			inorder(tree);
			printf("\n");

			preorder(tree);
			printf("\n");
		}
	}


	return 0;
}

