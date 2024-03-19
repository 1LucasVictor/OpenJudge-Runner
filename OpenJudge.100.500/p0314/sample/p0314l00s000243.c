#include <stdio.h>
#define MAX 25

void FindTop();
void FindRightEnd();
void Preorder();
void Inorder();
void Postorder();

struct node
{
  int p;
  int l, r;
} typedef node;

node N[MAX];
int top;
int rightEnd;

int main()
{
    int i, j;
    int n, id;

    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        N[i].p = -1;
    }
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &id);
        scanf("%d %d", &N[id].l, &N[id].r);
        if(N[id].l != -1) N[N[id].l].p = id;
        if(N[id].r != -1) N[N[id].r].p = id;
    }
    
	FindTop();
	FindRightEnd();

	printf("Preorder\n");
	Preorder(top);
	printf("Inorder\n");
	Inorder(top);
	printf("Postorder\n");
	Postorder(top);
	    
    return 0;
}

void FindTop()
{
	top = 0;
	while(N[top].p != -1)
	{
		top = N[top].p;
	}
}

void FindRightEnd()
{
	rightEnd = top;
	while(N[rightEnd].l != -1)
	{
		rightEnd = N[rightEnd].r;
	}
}

void Preorder(int id)
{
	if(id == -1) return;
	
	if(id != rightEnd) printf(" %d", id);
	else printf(" %d\n", id);
	
	Preorder(N[id].l);
	Preorder(N[id].r);
}

void Inorder(int id)
{
	if(id == -1) return;
	
	Inorder(N[id].l);
	
	if(id != rightEnd) printf(" %d", id);
	else printf(" %d\n", id);
	
	Inorder(N[id].r);
}

void Postorder(int id)
{
	if(id == -1) return;
	
	Postorder(N[id].l);
	Postorder(N[id].r);
	
	if(id != top) printf(" %d", id);
	else printf(" %d\n", id);
}