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

void find(link a,int k)
{
	while(a!=NULL&&k!=a->key)
	{
		if(k<a->key)
		{
			a=a->left;
		}
		else
		{
			a=a->right;
		}
	}
	if(a!=NULL)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
}

void delete(int a)
{
	link p=NULL;
	link x=root;
	link next;
	int f=0;
	while(x!=NULL&&a!=x->key)
	{
		p=x;
		if(a<x->key)
		{
			x=x->left;
		}
		else
		{
			x=x->right;
		}
	}
	if(x!=NULL)
	{
		if(x->left==NULL&&x->right==NULL)
		{
			if(a<p->key)
			{
				p->left=NULL;
			}
			else
			{
				p->right=NULL;
			}
		}
		else if(x->left==NULL)
		{
			if(a<p->key)
			{
				p->left=x->right;
			}
			else
			{
				p->right=x->right;
			}
		}
		else if(x->right==NULL)
		{
			if(a<p->key)
			{
				p->left=x->left;
			}
			else
			{
				p->right=x->left;
			}
		}
		else
		{
			p=x;
			next=x->right;
			if(next->left==NULL)
			{
				f=1;
			}
			while(next->left!=NULL)
			{
				p=next;
				next=next->left;
			}
			x->key=next->key;
			if(next->right==NULL)
			{
				if(f==0)
				{
					p->left=NULL;
				}
				else
				{
					p->right=NULL;
				}
			}
			else
			{
				if(f==0)
				{
					p->left=next->right;
				}
				else
				{
					p->right=next->right;
				};
			}
		}
	}
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
		else if(strcmp(get,"find")==0)
		{
			scanf("%d",&num);
			find(root,num);
		}
		else if(strcmp(get,"delete")==0)
		{
			scanf("%d",&num);
			delete(num);
		}
	}

	return 0;
}

