#include<stdio.h>
#include<stdlib.h>
#define NIL NULL

typedef struct node *Node;
struct node{
  int key;
  Node Right;
  Node Left;
  Node Parent;
};

Node root;

void insert(int k)
{
 Node y = NIL;
 Node x = root;
 Node z;

 z = malloc(sizeof(struct node));

 z->key = k;
 z->Left = NIL;
 z->Right = NIL;
 
  while(x != NIL){
    y = x;
    if(z->key < x->key)
      x = x->Left;
    else
      x = x->Right;
  }

  z->Parent = y;

  if(y == NIL)
    root = z;
  else if(z->key < y->key)
    y->Left = z;
  else
    y->Right = z;
}


void inorder(Node r){
  if(r == NIL) return;
  inorder(r->Left);
  printf(" %d",r->key);
  inorder(r->Right);
}

void preorder(Node r){
  if(r == NIL) return;
  printf(" %d",r->key);
  preorder(r->Left);
  preorder(r->Right);
}
   void print()
{
  inorder(root);
  printf("\n");
  preorder(root);
  printf("\n");
}

int main()
{
  int m,i,k;
  char s[6];
  scanf("%d",&m);

  for(i=0; i<m; i++){
    scanf("%s%d",s,&k);
    //printf("i = %d\n",i);
    if(s[0] == 'i')
      insert(k);
    else
      print();
  }
  return 0;
}

