#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    int key;
    struct node *p, *l, *r;
}Node;

Node *tmp, *NIL;

void insert(int);
void inorder(Node *);
void preorder(Node *);
Node *find(Node *, int);
void Delete(Node *);
Node *min(Node *);
Node *Nextpoint(Node *);

int main()
{
    int m, i, k;
    char c[1000];
    Node *judge;
    
    scanf("%d", &m);
    
    for( i = 0 ; i < m ; i++ ){
        scanf("%s", c);
        if( strcmp(c, "find") == 0 ){
            scanf("%d", &k);
            judge = find(tmp, k);
            if( judge != NIL ) printf("yes\n");
            else printf("no\n");
        }
        else if( strcmp(c, "insert") == 0 ){
            scanf("%d", &k);
            insert(k);
        }
        else if( strcmp(c, "print") == 0 ){
            inorder(tmp);
            printf("\n");
            preorder(tmp);
            printf("\n");
        }
	else if( strcmp(c, "delete") == 0 ){
	  scanf("%d", &k);
	  Delete(find(tmp, k));
	}
    }
    
    return 0;
}

void insert(int k){
    Node *y = NIL;
    Node *x = tmp;
    Node *z;
    
    z = malloc(sizeof(Node));
    z->key = k;
    z->l = NIL;
    z->r = NIL;
    
    while( x != NIL ){
        y = x;
        if( z->key < x->key ) x = x->l;
        else x = x->r;
    }
    
    z->p = y;
    if( y == NIL ) tmp = z;
    else if( z->key < y->key ) {
        y->l = z;
    } else y->r = z;
    
}

void inorder(Node *u){
    if( u == NIL ) return;
    inorder(u->l);
    printf(" %d", u->key);
    inorder(u->r);
}

void preorder(Node *u){
    if( u == NIL ) return;
    printf(" %d", u->key);
    preorder(u->l);
    preorder(u->r);
}

Node *find(Node *x, int k)
{
    while( x != NIL && k != x->key ){
        if( k < x->key ) x = x->l;
        else x = x->r;
    }
    
    return x;
}

void Delete(Node *z){
  Node *x, *y;

  if( z->l == NIL || z->r == NIL ) y = z;
  else y = Nextpoint(z);

  if( y->l != NIL ) x = y->l;
  else x = y->r;

  if( x != NIL ) x->p = y->p;

  if( y->p == NIL ) tmp = x;
  else {
    if( y == y->p->l ) y->p->l = x;
    else y->p->r = x;
  }

  if( y != z ) z->key = y->key;

  free(y);
}

Node *Nextpoint(Node *x)
{
  if( x->r != NIL ) return min(x->r);
  Node *y = x->p;

  while( y != NIL && x == y->r ){
    x = y;
    y = y->p;
  }
  return y;
}

Node *min(Node *x)
{
  while( x->l != NIL ) x = x->l;
  return x;
}