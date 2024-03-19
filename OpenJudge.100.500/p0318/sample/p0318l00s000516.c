#include<stdio.h>
#include<stdlib.h>

struct node{
  struct node *r;
  struct node *l;
  struct node *par;
  int key;
};
typedef struct node * Node;
#define NIL NULL
Node treeSearch(Node,int);
Node nextnode(Node);
Node root;

Node treeSearch(Node u, int k){
  if(u == NIL || u->key == k) return u;
  if(k<u->key){
    return treeSearch(u->l,k);
  }
  else if(k>u->key){
    return treeSearch(u->r,k);
  }
  return NIL;
}

void treeDelete(Node o,int tar){
  Node z; // node to be deleted
  int k;
  z=treeSearch(o,tar);
  if(z->l == NIL && z->r == NIL){
    if(z->par->l == z){
      z->par->l=NIL;
    }
    else{
      z->par->r=NIL;
    }
    free(z);
  }
  else if(z->l != NIL && z->r == NIL){
    if(z->par->l == z){
      z->par->l=z->l;
      z->l->par=z->par;
    }
    else{
      z->par->r=z->l;
      z->l->par=z->par;
    }
    free(z);
  }
  else if(z->l == NIL && z->r != NIL){
    if(z->par->l == z){
      z->par->l=z->r;
      z->r->par=z->par;
    }
    else{
      z->par->r=z->r;
      z->r->par=z->par;
    }
    free(z);
  }
  else{
    k = nextnode(z)->key;
    treeDelete(o,k);
    z->key = k;
  }
}
Node nextnode(Node del){
  Node x;
	if(del->r!=NIL){
		del=del->r;
		while(del->l!=NIL){
			del=del->l;
		}
		return del;
	}
	x=del->par;
	while(x!=NIL&&del==x->r){
		del=x;
		x=x->par;
	}
	return x;
}
void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->l = NIL;
  z->r = NIL;
  while(x!=NIL){
    y=x;
    if(z->key<x->key) x = x->l;
    else x = x->r;
  }
  z->par = y;
  if(y==NIL) root = z;
  else if(z->key < y->key) y->l = z; // z �� y �̍��̎q�ɂ���
    else y->r = z; // z �� y �̉E�̎q�ɂ���
}

void inorder(Node u){
  if(u->l!=NIL) inorder(u->l);
  printf(" %d",u->key);
  if(u->r!=NIL) inorder(u->r);
  return;
}

void preorder(Node u){
  printf(" %d",u->key);
  if(u->l!=NIL) preorder(u->l);
  if(u->r!=NIL) preorder(u->r);
  return;
}


int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    }
    else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    else if ( com[0] == 'f' ){
      scanf("%d", &x);
      Node t = treeSearch(root, x);
      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    }
  	else if ( com[0] == 'd' ){
      scanf("%d", &x);
      treeDelete(root,x);
    }
  }

  return 0;
}
