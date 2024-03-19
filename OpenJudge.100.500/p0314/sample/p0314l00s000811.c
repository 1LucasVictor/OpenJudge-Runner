#include <stdio.h>
#define MAX 25

int FindTop();
void Preorder(int, int);
void Inorder(int, int);
void Postorder(int, int);

struct node
{
  int p;
  int l, r;
} typedef node;

node N[MAX];

int main()
{
    int i, j;
    int n, id, top;

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
    
	top = FindTop();

	printf("Preorder\n");
	Preorder(top, n);
	printf("Inorder\n");
	Inorder(top, n);
	printf("Postorder\n");
	Postorder(top, n);
	    
    return 0;
}

int FindTop()
{
	int top = 0;
	while(N[top].p != -1)
	{
		top = N[top].p;
	}
	
	return top;
}

void Preorder(int id, int n)
{
	static int count = 0;
	
	if(id == -1) return;
	
	count++;
	if(count != n) printf(" %d", id);
	else printf(" %d\n", id);
	
	Preorder(N[id].l, n);
	Preorder(N[id].r, n);
}

void Inorder(int id, int n)
{
	static int count = 0;
	
	if(id == -1) return;
	
	 Inorder(N[id].l, n);
	
	count++;
	if(count != n) printf(" %d", id);
	else printf(" %d\n", id);
	
	Inorder(N[id].r, n);
}

void Postorder(int id, int n)
{
	static int count = 0;
	
	if(id == -1) return;
	
	Postorder(N[id].l, n);
	Postorder(N[id].r, n);
	
	count++;
	if(count != n) printf(" %d", id);
	else printf(" %d\n", id);
}