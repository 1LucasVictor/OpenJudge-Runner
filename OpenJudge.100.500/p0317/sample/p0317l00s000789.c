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

void insert(int);
void inorder(struct Node *);
void preorder(struct Node *);
struct Node * find(struct Node *, int);

int main(){
  int i,n,value,findnum;
  char A[10];

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%s",A);

    if(strcmp(A,"insert")==0){
     scanf("%d",&value);
      insert(value);
    }
    else if(strcmp(A,"print") == 0){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    else if(strcmp(A,"find") == 0){
      scanf("%d",&findnum);
      struct Node *F = find(root,findnum);
      if(F != NIL) printf("yes\n");
      else printf("no\n");
    }
  }

    return 0;
}

void insert(int n){
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

void inorder(struct Node *x){
  if(x == NIL) return;
  inorder(x -> left);
  printf(" %d",x -> k);
  inorder(x -> right);
}

void preorder(struct Node *x){
  if(x == NIL) return;
  printf(" %d",x -> k);
  preorder(x -> left);
  preorder(x -> right);
}

struct Node * find(struct Node *x, int n){
  while(x != NIL && n != x -> k){
    if(n < x -> k ) x = x -> left;
    else x = x -> right;
  }
  return x;
}

