#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node {
	int key;
	struct Node* parent;
	struct Node* left;
	struct Node* right;
	struct Node* sibling;
	int degree;
	
	//int depth;
	//int height;
	//char type[15];
};
typedef struct Node * NodePointer;

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
	
	//setting part
	NodePointer array [n];
	for (int i = 0; i < n;i++)
	{
		array[i] = (NodePointer) malloc (sizeof(struct Node));
		array[i]->parent = NULL;
		array[i]->sibling = NULL;
		array[i]->left = NULL;
		array[i]->right = NULL;
		array[i]->degree = 0;
	}
	
	//input part
	for (int i = 0; i < n;i++)
	{
		int id ,left_id,right_id;
		scanf("%d %d %d\n",&id,&left_id,&right_id);
		
		array[id]->key = id;
		if (left_id != -1){
			array[id]->left = array[left_id];
			array[left_id]->parent =  array[id];
			array[id]->degree++;
		}
		if (right_id != -1){
			array[id]->right = array[right_id];
			array[right_id]->parent =  array[id];
			array[id]->degree++;
		}
		if (left_id != -1 && right_id != -1){
			array[left_id]->sibling =  array[right_id];
			array[right_id]->sibling =  array[left_id];
		}
	}
	
	//print part
	for (int i = 0; i < n;i++)
	{
		if(array[i]->parent == NULL) {
			//strcpy(array[i]->type ,"root");
			printf("Preorder\n");
			preorder(array[i]);
			printf("\n");
			
			printf("Inorder\n");
			inorder(array[i]);
			printf("\n");
			
			printf("Postorder\n");
			postorder(array[i]);
			printf("\n");
			
			break;
		}
	}

	
	return 0;
}


