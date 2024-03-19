#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
  int key;
  struct node *parent;
  struct node *left;
  struct node *right;
} Node;

void insert(int k);
void inorder(Node *x);
void preorder(Node *k);

Node *root, *NIL;

void insert(int k)
{
  Node *y=NIL;
  Node *x=root;
  Node *z;

  z = (Node *)malloc(sizeof(Node));
  z->key=k;
  z->left=NIL;
  z->right=NIL;

  while(x!=NIL){
    y=x;

    if(z->key < x->key){
      x = x->left;
    }
    else{
      x = x->right;
    }
  }
  z->parent = y;

  if(y == NIL){
    root=z;
  }
  else if(z->key < y->key){
    y->left = z;
  }
  else{
    y->right = z;
  }
}

void inorder(Node *x)
{
  if(x == NIL) return;
  inorder(x->left);
  printf(" %d",x->key);
  inorder(x->right);
}

void preorder(Node *x)
{
  if(x == NIL) return;
  printf(" %d", x->key);
  preorder(x->left);
  preorder(x->right);
}
  
int main()
{
  int i, o, k;
  char s[50];

  scanf("%d", &o);

  for(i=0; i<o; i++){
    scanf("%s", s);

    if(strcmp(s, "insert") == 0){
      scanf("%d", &k);
      insert(k);
    }
    else if(strcmp(s,"print") == 0){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    else
      continue;
  }
  return 0;
}