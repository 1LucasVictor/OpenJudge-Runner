#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
  int key;
  struct node *parent;
  struct node *left;
  struct node *right;
} ;

int flag = 0;

typedef struct node Node;

Node *root, *NIL;

void Insert(int);
void Inorder(Node *);
void Preorder(Node *);
void Find(Node *, int);

int main()
{
  int n,i,a;
  char in[7],insert[7] = "insert",find[5] = "find",print[6] = "print";
  scanf("%d",&n);
  for(i = 0; i < n; i++){
    scanf("%s",in);
    (void)getchar();
    if(strcmp(in, insert) == 0) {
      scanf(" %d",&a);
      Insert(a);
    }
    else if(strcmp(find, in) == 0) {
      scanf("%d",&a);
      Find(root,a);
      if(flag == 1) printf("yes\n");
      else printf("no\n");
      flag = 0;
    }
    else  {
      Inorder(root);
      printf("\n");
      Preorder(root);
      printf("\n");
    }
  }
  return 0;
}

void Insert(int a) {
  Node *b = NIL;
  Node *c = root;
  Node *d;

  d = malloc(sizeof(Node));
  d -> key = a;
  d -> left = NIL;
  d -> right = NIL;
  while(c != NIL) {
    b = c;
    if(d -> key < c -> key) c = c -> left;
    else  c = c -> right;
  }

  d -> parent = b;
  if(b == NIL)  root = d;
  else {
    if(d -> key < b -> key)  b -> left = d;
    else    b -> right = d;
  }
}

void Inorder(Node *u) {
  if(u == NIL) return;
  else {
    Inorder(u -> left);
    printf(" %d", u->key);
    Inorder(u -> right);
  }
}

void Preorder(Node *u) {
  if(u == NIL) return;
  else {
    printf(" %d", u->key);
    Preorder(u -> left);
    Preorder(u -> right);
  }
}

void Find(Node *u, int k) {
    if(u == NIL) return;
  else {
    if(u -> key == k) flag = 1;
    Find(u -> left, k);
    Find(u -> right, k);
  }
}