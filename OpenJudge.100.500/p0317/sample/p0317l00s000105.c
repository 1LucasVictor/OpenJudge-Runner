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

int main(){
  int str1 = 0, str2 = 0, str3 = 0;
  int i,n,value,findnum;
  char C1[10], C2[10]="insert", C3[10]="print",C4[10]="find";

  scanf("%d",&n);

  for(i = 0 ; i < n ; i++){
    scanf("%s",C1);

    if(strcmp(C1,C2) == 0) str1 = 1;
    if(strcmp(C1,C3) == 0) str2 = 1;
    if(strcmp(C1,C4) == 0) str3 = 1;

    if(str1 == 1){
      scanf("%d",&value);
      Insert(value);
      str1 = 0;
    }
    else if(str2 == 1){
      str2 = 0;
      Inorder(root);
      printf("\n");
      Preorder(root);
      printf("\n");
    }
    else if(str3 == 1){
      str3 = 0;
      scanf("%d",&findnum);
      struct Node *F = Find(root,findnum);
      if(F != NIL) printf("yes\n");
      else printf("no\n");
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

