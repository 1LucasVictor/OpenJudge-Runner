#include <stdio.h>

#define MAX 25

typedef struct {
	int parent;
	int left;
	int right;
} node;

void preorder(int);
void inorder(int);
void postorder(int);

node u[MAX];

int main(void)
{
	int i, n, id, left, right, rootId;
	
	scanf("%d",&n);
	for (id=0; id<n; id++) {
		u[id].parent = -1;
	}
	for (i=0; i<n; i++) {
		scanf("%d %d %d", &id, &left, &right);
		u[id].left = left;
		u[id].right = right;
		if(left != -1) {
			u[left].parent = id;
		}
		if(right != -1) {
			u[right].parent = id;
		}
	}
	
	rootId = 0;
	while (u[rootId].parent != -1) {
		rootId++;
	}
	
	printf("Preorder\n");
	preorder(rootId);
	printf("\nInorder\n");
	inorder(rootId);
	printf("\nPostorder\n");
	postorder(rootId);
	printf("\n");
	
	return 0;
}

void preorder(int id)
{
	printf(" %d", id);
	if(u[id].left != -1) preorder(u[id].left);
	if(u[id].right != -1) preorder(u[id].right);
}
void inorder(int id)
{
	if(u[id].left != -1) inorder(u[id].left);
	printf(" %d", id);
	if(u[id].right != -1) inorder(u[id].right);
}
void postorder(int id)
{
	if(u[id].left != -1) postorder(u[id].left);
	if(u[id].right != -1) postorder(u[id].right);
	printf(" %d", id);
}