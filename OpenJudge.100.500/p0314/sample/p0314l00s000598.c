#include <stdio.h>
#include <stddef.h>

int max(int x, int y) { return x > y ? x : y; }

typedef struct Node
{
	int v;
	struct Node *p;
	struct Node *l;
	struct Node *r;
} Node;

Node* root(Node *node)
{
	return node->p ? root(node->p) : node;
}

void x_order(Node *node, int x)
{
	if(!node){ return; }

	if(x == 1) { printf(" %d", node->v); }
	x_order(node->l, x);
	if(x == 2) { printf(" %d", node->v); }
	x_order(node->r, x);
	if(x == 3) { printf(" %d", node->v); }
}


int main()
{
	int n, x, l, r;
	Node *p, nodes[25];
	
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
	{
		nodes[i].v = i;
		nodes[i].p = nodes[i].l = nodes[i].r = NULL;
	}

	for(int i = 0; i < n; ++i)
	{
		scanf("%d %d %d", &x, &l, &r);
		if(l != -1)
		{
			nodes[x].l = &nodes[l];
			nodes[l].p = &nodes[x];
		}
		if(r != -1)
		{
			nodes[x].r = &nodes[r];
			nodes[r].p = &nodes[x];
		}
	}

	p = root(&nodes[0]);
	printf("Preorder\n");  x_order(p, 1); printf("\n");
	printf("Inorder\n");   x_order(p, 2); printf("\n");
	printf("Postorder\n"); x_order(p, 3); printf("\n");
}


