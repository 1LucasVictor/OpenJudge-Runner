#include<stdio.h>
#include<stdlib.h>
 
struct node{
  int key;
  struct node *r;
  struct node *l;
  struct node *p;
};
typedef struct node * Node;
#define NIL NULL
 
Node root;
 
Node treeSearch(Node u, int k){
  if(u == NIL || u->key == k){
    return u;
  }
  else if(u->key > k){
    return treeSearch(u->l,k);
  }
  else if(u->key < k){
    return treeSearch(u->r,k);
  }
 
}
 
void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;
 
  z = malloc(sizeof(struct node));
  z->key = k;
  z->l = NIL;
  z->r = NIL;
 
  while(x != NIL){
    y = x;
    if(z->key < x->key){
      x = x->l;
    }
    else x = x->r;
  }

  z->p = y;
  if(y == NIL){
    root = z;
  }
  else if(z->key < y->key){
    y->l = z;
  }
  else y->r = z;           
}
 
void inorder(Node u){
  if (u->l != NIL){
    inorder(u->l);
  }
    printf(" %d",u->key);
    if (u->r != NIL){
      inorder(u->r);
    }
}
void preorder(Node u){
  printf(" %d",u->key);
  if(u->l != NIL){
    preorder(u->l);
  }
  if(u->r != NIL){
    preorder(u->r);
  }
}
 
 
int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);
 
  for (i = 0; i < n; i++){
    scanf("%s", com);
    if (com[0] == 'f'){
      scanf("%d",&x);
      Node t = treeSearch(root, x);
      if (t != NIL){
	printf("yes\n");
      }
      else printf("no\n");
    } else if (com[0] == 'i'){
      scanf("%d", &x);
      insert(x);
    } else if (com[0] == 'p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
return 0;
}