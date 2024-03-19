#include<stdio.h>
#include<stdlib.h>

struct node{
  struct node *r;
  struct node *l;
  struct node *p;
  int key;
};
typedef struct node * Node;
#define N NULL

Node root;
void insert(int);
void inorder(Node);
void preorder(Node);
Node find(Node, int);

int main(){
  int s, i, x;
  char c[20];

  scanf("%d", &s);
 
  for (i = 0; i < s; i++){
    scanf("%s",c);

    if (c[0] == 'f'){
      scanf("%d", &x);
      
      Node t = find(root, x);
      if(t != N) printf("yes\n");
      if(t == N) printf("no\n");

    }

    if (c[0] == 'i'){
      scanf("%d", &x);
      insert(x);
    }

    if (c[0] == 'p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }

  }
  return 0;
}

void insert(int k){
  Node y = N;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->l = N;
  z->r = N;
 
  while(x != N){
    y=x;
    if(z->key < x->key) x = x->l;
    else x = x->r;
  }
  z->p = y;
  if(y == N)root = z;
  else if(z->key < y->key) y->l = z;
  else y->r = z;
}

void inorder(Node u){
  if(u != N){
    inorder(u->l);
    printf(" %d",u->key);
    inorder(u->r);
  }
}
void preorder(Node u){
  if(u != N){
    printf(" %d",u->key);
    preorder(u->l);
    preorder(u->r);
  }
}

Node find(Node u, int k){
  while(u != N && k != u->key){
    if(k < u->key) u = u->l;
    else u = u->r;
  }
  return u;
}