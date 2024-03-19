#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define MAX 50
const int nil=-1;
struct node
{
	int parent;
	int left;
	int right;
};
struct node tree[MAX];
int n;
void input()
{
	int i,j,id,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		tree[i].parent=nil;
		tree[i].left=nil;
		tree[i].right=nil;
	}
	for(i=1;i<=n;i++)
	{
		scanf("%d",&id);
		for(j=1;j<=2;j++)
		{
			scanf("%d",&c);
			if(j==1)
				tree[id].left=c;
			else
				tree[id].right=c;
			tree[c].parent=id;
		}
	}
	return;
}
void pre(int u)
{
	if(u==nil)
		return;
	printf(" %d",u);
	pre(tree[u].left);
	pre(tree[u].right);
	return;
}
void in(int u)
{
	if(u==nil)
		return;
	in(tree[u].left);
	printf(" %d",u);
	in(tree[u].right);
	return;
}
void post(int u)
{
	if(u==nil)
		return;
	post(tree[u].left);
	post(tree[u].right);
	printf(" %d",u);
	return;
}
int main()
{
	input();

	int i,root;
	for(i=0;i<n;i++)
		if(tree[i].parent==nil)
			root=i;

	printf("Preorder\n");
	pre(root);

	printf("\nInorder\n");
	in(root);

	printf("\nPostorder\n");
	post(root);
	printf("\n");

	return 0;
}
