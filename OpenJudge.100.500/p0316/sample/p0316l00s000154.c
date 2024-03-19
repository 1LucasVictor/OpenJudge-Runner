#include<stdio.h>
#include<stdlib.h>

#define int long long

int p = 0;

struct TNode
{
	int data;
	struct TNode *left, *right;
};

typedef struct TNode *Tree;

Tree insert(Tree T, int x)
{
	if (T == NULL)
	{
		T = (Tree)malloc(sizeof(struct TNode));
		T->data = x;
		T->left = T->right = NULL;
	}
	if (x < T->data)
		T->left = insert(T->left, x);
	if (x > T->data)
		T->right = insert(T->right, x);
	return T;
}

void inorder(Tree T)
{
	if (T)
	{
		inorder(T->left);
		printf(" %lld", T->data);
		inorder(T->right);
	}
}

void preorder(Tree T)
{
	if (T)
	{
		printf(" %lld", T->data);
		preorder(T->left);
		preorder(T->right);
	}
}

void print(Tree T)
{
	inorder(T);
	printf("\n");
	preorder(T);
	printf("\n");
}

int main()
{
	int n, x;
	char s[20];
	Tree T;
	T = NULL;

	scanf("%lld", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s", s);
		if (s[0] == 'i')
		{
			scanf("%lld", &x);
			T = insert(T, x);
		}
		if (s[0] == 'p')
			print(T);
	}
}
