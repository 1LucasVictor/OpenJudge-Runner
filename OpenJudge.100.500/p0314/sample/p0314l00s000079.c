#include <stdio.h>

typedef struct node{
    int parent;
    int left;
    int right;
    int id;
} Node;

void printPre(Node *, int);
void printIno(Node *, int);
void printPos(Node *, int);
 
int main(){
    int i, n, root, buf;
    Node A[32];
    scanf("%d", &n);

	for(i = 0 ; i < n ; i++){
		A[i].parent = -1;
		A[i].left = -1;
		A[i].right = -1;
	}

    for(i = 0 ; i < n ; i++){
		scanf("%d", &buf);
        scanf("%d %d", &A[buf].left, &A[buf].right);
        if(A[buf].left != -1)A[A[buf].left].parent = i;
        if(A[buf].right != -1)A[A[buf].right].parent = i;
    }
	
	for(i = 0 ; i < n ; i++){
		if(A[i].parent == -1){
			root = i;
			break;
		}
	}

	printf("Preorder\n");
    printPre(A, root);
	printf("\n");
	printf("Inorder\n");
    printIno(A, root);
	printf("\n");
	printf("Postorder\n");
    printPos(A, root);
	printf("\n");

    return 0;
}

void printPre(Node *A, int id){
	printf(" %d", id);
	if(A[id].left != -1)printPre(A, A[id].left);
	if(A[id].right != -1)printPre(A, A[id].right);
}

void printIno(Node *A, int id){
	if(A[id].left != -1)printIno(A, A[id].left);
	printf(" %d", id);
	if(A[id].right != -1)printIno(A, A[id].right);
}

void printPos(Node *A, int id){
	if(A[id].left != -1)printPos(A, A[id].left);
	if(A[id].right != -1)printPos(A, A[id].right);
	printf(" %d", id);
}
