#include<stdio.h>

#define N 25

struct Node{
	int link, left, right;
}tree[N+1];

void addNode(int id, int left, int right)
{
	tree[id].left = left;
	tree[id].right = right;
	if(left != -1){
		tree[left].link = 1;
	}
	if(right != -1){
		tree[right].link = 1;
	}
	return;
}

int rootNode(void)
{
	int i;
	for(i = 0; i < N + 1; i++){
		if(tree[i].link == 0){
			return(i);
		}
	}
	return(-1);
}

void preorderInner(int id)
{
	if(id == -1){
		return;
	}
	printf(" %d", id);
	preorderInner(tree[id].left);
	preorderInner(tree[id].right);
	return;
}

void preorder(void)
{
	printf("Preorder\n");
	preorderInner(rootNode());
	printf("\n");
	return;
}

void inorderInner(int id)
{
	if(id == -1){
		return;
	}
	inorderInner(tree[id].left);
	printf(" %d", id);
	inorderInner(tree[id].right);
	return;
}

void inorder(void)
{
	printf("Inorder\n");
	inorderInner(rootNode());
	printf("\n");
	return;
}

void postorderInner(int id)
{
	if(id == -1){
		return;
	}
	postorderInner(tree[id].left);
	postorderInner(tree[id].right);
	printf(" %d", id);
	return;
}

void postorder(void)
{
	printf("Postorder\n");
	postorderInner(rootNode());
	printf("\n");
	return;
}

int main(int argc, char* argv[])
{
	int i, n, id, left, right;

	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d %d %d", &id, &left, &right);
		addNode(id, left, right);
	}

	preorder();
	inorder();
	postorder();

	return(0);
}