#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
  int key;
  struct node *p;
  struct node *left;
  struct node *right;
};
typedef struct node *Node;

Node root,NIL;
int max;

void insert(int k){
  int T;
  Node x = root;
  Node y = NIL;
  Node z;

  z = malloc(sizeof(struct node));
  z -> key = k;
  z -> left = NIL;
  z -> right = NIL;

  while(x != NIL){
    y = x;
    if(z -> key < x -> key){
      x = x -> left;
  }
  else{
    x = x -> right;
  }
}

z -> p = y;
if ( y == NIL ){
  root = z;
}
else{
  if (z -> key < y -> key) {
    y -> left = z;
  }
  else{
    y -> right = z;
  }
}
}

void in(Node n){
  if (n == NIL) return;
  in(n -> left);
  printf(" %d", n -> key);
  in(n -> right);
}

void out(Node n){
  if (n == NIL) return;
  printf(" %d", n -> key);
  out(n -> left);
  out(n -> right);
}

int main(){
  int l, i, s;
  char M[20];
  scanf("%d",&l);
  max = 0;
  for (i=0 ; i<l ; i++){
    scanf("%s", M);
    if (strcmp(M,"insert") == 0){
      scanf("%d",&s);
      insert(s);
    }
    else if (strcmp(M,"print") == 0){
      in(root);
      printf("\n");
      out(root);
      printf("\n");
    }
  }

  return 0;
}

