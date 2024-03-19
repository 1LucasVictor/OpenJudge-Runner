#include <stdio.h>
#define max 25
#define null -1
typedef struct
{
	int p,l,r;	
}Node;
Node T[max];

void preorder(int root)
{
	if(root==null)
		return;		
		printf(" %d",root);
		preorder(T[root].l);
		preorder(T[root].r);		
}

void inorder(int root)
{
	if(root==null)
		return;					
		inorder(T[root].l);
		printf(" %d",root);
		inorder(T[root].r);
}

void postorder(int root)
{
	if(root==null)
		return;				
		postorder(T[root].l);
		postorder(T[root].r);
		printf(" %d",root);
}

int main(int argc, char *argv[])
{
	int i,n,node,left,right,root;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	T[i].p=null;
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&node,&left,&right);
		T[node].l=left;
		T[node].r=right;
		if(left!=null)
		T[left].p=node;
		if(right!=null)
		T[right].p=node;
	}
	for(i=0;i<n;i++)
	if(T[i].p==null)
	{
	root=i;	
	break;
	}
	printf("Preorder\n");
	preorder(root);
	printf("\nInorder\n");
	inorder(root);
	printf("\nPostorder\n");
	postorder(root);
	printf("\n");
	return 0;
}
