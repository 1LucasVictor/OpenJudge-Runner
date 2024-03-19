#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node{
  int k;
  struct Node *right;
  struct Node *left;
  struct Node *parent;
};

struct Node *root, *NIL;

void Insert(int);
void Inorder(struct Node *);
void Preorder(struct Node *);
struct Node * Find(struct Node *, int);
void Delete(struct Node *);
struct Node * Minimum(struct Node *);
struct Node * Successor(struct Node *);

int main(){
  int i,n,value,findnum;
  char C1[10];

  scanf("%d",&n);

for(i=0;i<n;i++)

  for(i = 0 ; i < n ; i++){
    scanf("%s",C1);

    if(strcmp(C1,"insert") == 0){
      scanf("%d",&value);
      Insert(value);
    }
    else if(strcmp(C1,"print") == 0){
      Inorder(root);
      printf("\n");
      Preorder(root);
      printf("\n");
    }
    else if(strcmp(C1,"find") == 0){
      scanf("%d",&value);
      struct Node *F = Find(root,value);
      if(F != NIL) printf("yes\n");
      else printf("no\n");
    }
    else if(strcmp(C1,"delete") == 0){
      scanf("%d",&value);
      Delete(Find(root,value));
    }
  }

    return 0;
}

void Insert(int n){
struct  Node *p = root;
struct  Node *q = NIL;
struct  Node *r;

r = (struct Node *)malloc(sizeof(struct Node));
r -> k = n;
r -> left = NIL;
r -> right = NIL;

while(p != NIL){
   q = p;
   if(r->k < p->k){
     p = p -> left;
   }
   else{
     p = p -> right;
   }
}

r -> parent = q;
  if(q == NIL){
    root = r;
  }
  else{
    if(r->k < q->k){
      q -> left = r;
    }
    else{
      q -> right = r;
    }
  }
}

void Inorder(struct Node *x){
  if(x == NIL) return;
  Inorder(x -> left);
  printf(" %d",x -> k);
  Inorder(x -> right);
}

void Preorder(struct Node *x){
  if(x == NIL) return;
  printf(" %d",x -> k);
  Preorder(x -> left);
  Preorder(x -> right);
}

struct Node * Find(struct Node *x, int n){
  while(x != NIL && n != x -> k){
    if(n < x -> k ) x = x -> left;
    else x = x -> right;
  }
  return x;
}

void Delete(struct Node *x){
  struct Node *y;
  struct Node *z;

  if(x -> left == NIL || x -> right == NIL) y = x;
  else y = Successor(x);

  if(y -> left != NIL) z = y -> left;
  else z = y -> right;

  if(z != NIL) z -> parent = y -> parent;

  if(y -> parent == NIL){
    root = y;
  }
  else {
    if(y == y -> parent -> left) y -> parent -> left = z;
    else y -> parent -> right = z;
  }

  if(y != x) x -> k = y -> k;

  free(y);
}

struct Node * Minimum(struct Node *x){
  while(x -> left != NIL) x = x -> left;
  return x;
}

struct Node * Successor(struct Node *x){
  struct Node *y;

  if(x -> right != NIL) return Minimum(x -> right);

  y = x -> parent;
  while(y != NIL && x == y -> right){
    x = y;
    y = y -> parent;
  }
  return y;
}

