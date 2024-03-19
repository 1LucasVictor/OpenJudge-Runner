#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
struct node
{
	int key;
	struct node *parent;
	struct node *left;
	struct node *right;
};
char com[500010][10];
int x[500010];
struct node *root;
void insert(int z)
{
	struct node *v;
	if(!root)
	{
		v=(struct node *)malloc(sizeof(struct node));
		v->key=z;
		v->left=v->parent=v->right=NULL;
		root=v;
		return;
	}
	struct node *x,*y;
	y=NULL;
	x=root;
	while(x!=NULL)
	{
		y=x;
		if(z<x->key)
			x=x->left;
		else
			x=x->right;
	}
	v=(struct node *)malloc(sizeof(struct node));
	v->left=v->parent=v->right=NULL;
	v->key=z;
	v->parent=y;
	if(z<y->key)
		y->left=v;
	else
		y->right=v;
	return;
}
void inorder(struct node *u)
{
	if(!u)
		return;
	inorder(u->left);
	printf(" %d",u->key);
	inorder(u->right);
	return;
}
void preorder(struct node *u)
{
	if(!u)
		return;
	printf(" %d",u->key);
	preorder(u->left);
	preorder(u->right);
	return;
}
int main()
{
	int n,i;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",com[i]);
		if(strcmp(com[i],"insert")==0)
			scanf("%d",&x[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(strcmp(com[i],"insert")==0)
			insert(x[i]);
		if(strcmp(com[i],"print")==0)
		{
			inorder(root);
			printf("\n");
			preorder(root);
			printf("\n");
		}
	}
	return 0;
}
