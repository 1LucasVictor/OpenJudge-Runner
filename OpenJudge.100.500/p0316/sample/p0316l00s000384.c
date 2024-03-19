#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct node *link;

struct node
{
	int key;
	link parent,left,right;
};

link root;
link in;

void insert(link z)
{
	link p=NULL;
	link x=root;
	while(x!=NULL)
	{
		p=x;
		if(z->key<x->key)
		{
			x=x->left;
		}
		else
		{
			x=x->right;
		}
		z->parent=p;
	}
	if(p==NULL)
	{
		root=z;
	}
	else if(z->key<p->key)
	{
		p->left=z;
	}
	else
	{
		p->right=z;
	}
}

void traverse1(link a)
{
	if(a==NULL) return;
	printf(" %d",a->key);
	traverse1(a->left);
	traverse1(a->right);
}

void traverse2(link a)
{
	if(a==NULL) return;
	traverse2(a->left);
	printf(" %d",a->key);
	traverse2(a->right);
}

int main(void)
{
	root=NULL;

	int i,num,N;
	char get[10];

	scanf("%d",&N);

	for(i=0;i<N;i++)
	{
		scanf("%s",get);

		if(strcmp(get,"insert")==0)
		{
			scanf("%d",&num);
			in=malloc(sizeof(*in));
			in->key=num;
			in->left=NULL;
			in->right=NULL;
			in->parent=NULL;
			insert(in);
		}
		else if(strcmp(get,"print")==0)
		{
			traverse2(root);
			printf("\n");
			traverse1(root);
			printf("\n");
		}
	}

	return 0;
}

