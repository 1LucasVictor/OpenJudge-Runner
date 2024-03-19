#include <stdio.h>
#include <stdlib.h>

struct Node {
  int key;
  struct Node *right, *left, *parent;
};

struct Node *root,*NIL;


void insert(int);
void inorder(struct Node*);
void preorder(struct Node*);

  
int main()
{
  int a,i,b;
  char com[20];
  
  scanf("%d", &a);

  for(i = 0; i < a; i++){
    
    scanf("%s", com);
    
    if(com[0] == 'i'){
      
      scanf("%d", &b);
      
      insert(b);
    }
    
    else if(com[0] == 'p'){
      inorder(root);
      printf("\n");
      preorder(root);
      
      printf("\n");
    }
  }

  return 0;
}


void insert(int s)
{
  struct Node *y = NIL;
  struct Node *x = root;
  struct Node *z;

  z = (struct Node *)malloc(sizeof(struct Node));
  z->key = s;
  z->left = NIL;
  z->right = NIL;

  while(x!= NIL){
    y = x;
    if(z->key < x->key){
      x = x->left;
    } else{
      x = x->right;
    }
  }
    
  z->parent = y;
  
  if(y == NIL){
    root = z;
  }
  else{
    if( z->key < y->key){
      y->left = z;
    }
    else{
      y->right = z;
    }
  }
}


void inorder(struct Node *t)
{
  if(t == NIL) return;
  
  inorder(t->left);
  
  printf(" %d", t->key);
  
  inorder(t->right);
}


void preorder(struct Node *u)
{
  if(u == NIL) return;
  
  printf(" %d", u->key);
  
  preorder(u->left);
  preorder(u->right);
}

