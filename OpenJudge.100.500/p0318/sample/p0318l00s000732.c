#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 500000

struct node
{
    int key;
    struct node* p;
    struct node *l, *r;
} typedef node;

void Insert(int);
node* Find(int);
void Delete(int);
node* Successor(int);
node* Minimum(node*);
void Print();
void Inorder(node*);
void Preorder(node*);

node *root = NULL;

int main()
{
    int i;
    int n, key;
    char order[7];

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%s", order);
 
        if(strcmp(order, "insert") == 0)
        {
            scanf("%d", &key);
	        Insert(key);
	    }
	    if(strcmp(order, "find") == 0)
	    {
	        scanf("%d", &key);
	        if(Find(key) != NULL)
	        printf("yes\n");
	        else
	        printf("no\n");
	    }
	    if(strcmp(order, "delete") == 0)
	    {
	    	scanf("%d", &key);
	    	Delete(key);
	    }
        if(strcmp(order, "print") == 0)
        {
            Print();
        }
    }
    return 0;
}

void Insert(int key)
{
    node *x, *y, *z;

    x = root;
    y = NULL;
    z = (node*)malloc(sizeof(node));
    z->key = key;
	z->l = NULL;
	z->r = NULL;

    while(x != NULL)
    {
        y = x;
        if(z->key < x->key) x = x->l;
        else x = x->r;
    }
    z->p = y;

    if(y == NULL) 
    root = z;
    else if(z->key < y->key)
    y->l = z;
    else 
    y->r = z;
}

node* Find(key)
{
    node *x;
    
    x = root;
    
    while(x != NULL)
    {
        if(key == x->key)
        return x;

        if(key < x->key)
        x = x->l;
        else
        x = x->r;
    }
    return NULL;
}

void Delete(int key)
{
	node *x, *y, *z;
	
	z = Find(key);
	
	if(z->l == NULL || z->r == NULL)
	y = z;
	else
	y = Successor(key);
	
	if(y->l != NULL)
	x = y->l;
	else
	x = y->r;
	
	if(x != NULL)
	x->p = y->p;
	
	if(y->p == NULL)
	root = x;
	else if(y == y->p->l)
	y->p->l = x;
	else
	y->p->r = x;
	
	if(y != z)
	z->key = y->key;
}

node* Successor(int key)
{
	node *x, *y;
	
	x = Find(key);
	
	if(x->r != NULL)
	return Minimum(x->r);
	
	y = x->p;
	while(y != NULL && x == y->r)
	{
		x = y;
		y = y->p;
	}
	return y;
}

node* Minimum(node *x)
{
	while(x->l != NULL)
	{
		x = x->l;
	}
	return x;
}
    
void Print()
{
    Inorder(root);
    printf("\n");
    Preorder(root);
    printf("\n");
}
 
void Inorder(node *x)
{
    if(x == NULL) return;

    Inorder(x->l);
    
    printf(" %d", x->key);
    
    Inorder(x->r);
}

void Preorder(node *x)
{
    if(x == NULL) return;
    
    printf(" %d", x->key);

    Preorder(x->l);
    Preorder(x->r);
}