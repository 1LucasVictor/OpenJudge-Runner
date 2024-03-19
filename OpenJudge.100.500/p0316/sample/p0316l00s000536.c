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
	int n;
	scanf("%d\n",&n);

	NodePointer tree = (NodePointer) malloc (sizeof(struct Node));
	
	char input [8];
	int k;
	
	for ( int i = 0; i  < n; i++){
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
		}else {
			inorder(tree);
			printf("\n");
			
			preorder(tree);
			printf("\n");
		}
	}
	
	
	return 0;
}
