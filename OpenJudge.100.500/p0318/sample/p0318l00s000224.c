#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node{
  int k;
  struct Node *right;
  struct Node *left;
  struct Node *parent;
}T;

T *root, *NIL;

void Insert(int);
void Inorder(T *);
void Preorder(T *);
T * Find(T *, int);
void Delete(T *);
T * Minimum(T *);
T * Successor(T *);

int main(){
  int i,n,value,findnum;
  char com[10];

  scanf("%d",&n);

  for(i = 0 ; i < n ; i++){
    scanf("%s",com);

    if(strcmp(com,"insert") == 0){
      scanf("%d",&value);
      Insert(value);
    }
    else if(strcmp(com,"print") == 0){
      Inorder(root);
      printf("\n");
      Preorder(root);
      printf("\n");
    }
    else if(strcmp(com,"find") == 0){
      scanf("%d",&value);
      struct Node *F = Find(root,value);
      if(F != NIL) printf("yes\n");
      else printf("no\n");
    }
    else if(strcmp(com,"delete") == 0){
      scanf("%d",&value);
      Delete(Find(root,value));
    }
  }

    return 0;
}

void Insert(int n){
T *p = root;
T *q = NIL;
T *r;

r = (T *)malloc(sizeof(struct Node));
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

void Inorder(T *x){
  if(x == NIL) return;
  Inorder(x -> left);
  printf(" %d",x -> k);
  Inorder(x -> right);
}

void Preorder(T *x){
  if(x == NIL) return;
  printf(" %d",x -> k);
  Preorder(x -> left);
  Preorder(x -> right);
}

T * Find(T *x, int n){
  while(x != NIL && n != x -> k){
    if(n < x -> k ) x = x -> left;
    else x = x -> right;
  }
  return x;
}

void Delete(T *x){
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

T * Minimum(T *x){
  while(x -> left != NIL) x = x -> left;
  return x;
}

T * Successor(T *x){
  struct Node *y;

  if(x -> right != NIL) return Minimum(x -> right);

  y = x -> parent;
  while(y != NIL && x == y -> right){
    x = y;
    y = y -> parent;
  }
  return y;
}

