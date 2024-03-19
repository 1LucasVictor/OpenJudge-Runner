#include <stdio.h>
#include <stdlib.h>
#define MAX 10000
#define NIL -1
struct node{
	int parent,right,left;
};
struct node T[MAX];
int n;

void preorder(int);
void inorder(int);
void postorder(int);

int main(void)
{
	int i,v,l,r,root;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		T[i].parent = NIL;
	}
	for(i=0;i<n;i++){
		scanf("%d %d %d",&v,&l,&r);
	
	T[v].right = r;
	T[v].left = l;
	if(l != NIL ) T[l].parent = v;
	if(r != NIL ) T[r].parent = v;
	}
	for(i=0; i<n; i++) if(T[i].parent ==NIL) root = i;
	
	printf("Preorder\n");
	preorder(root);
	printf("\n");
	printf("Inorder\n");
	inorder(root);
	printf("\n");
	printf("Postorder\n");
	postorder(root);
	printf("\n");
}

void preorder(int u){
	if(u==NIL) return;
	printf(" %d",u);
	preorder(T[u].left);
	preorder(T[u].right);
}

void inorder(int u){
	if(u==NIL) return;
	inorder(T[u].left);
	printf(" %d",u);
	inorder(T[u].right);
}

void postorder(int u){
	if(u==NIL) return;
	postorder(T[u].left);
	postorder(T[u].right);
	printf(" %d",u);
}
