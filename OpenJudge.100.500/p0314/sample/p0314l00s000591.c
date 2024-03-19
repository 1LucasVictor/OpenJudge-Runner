#include<stdio.h>
#define MAX 100001
#define NIL -1

struct Node{
  int left;
  int right;
  int parent;
};

struct Node Tree[MAX];

void Preorder(int);
void Inorder(int);
void Postorder(int);

int main(){
  int n, i;
  int id,l,r,root;

  scanf("%d",&n);

  for(i = 0 ; i < n ; i++){
    Tree[i].parent = NIL;
  }

  for(i = 0 ; i < n ; i++){
    scanf("%d %d %d",&id, &l, &r);
    Tree[id].left = l;
    Tree[id].right = r;
    if(l != NIL) Tree[l].parent = id;
    if(r != NIL) Tree[r].parent = id;
  }

  for(i = 0 ; i < n ; i++) if(Tree[i].parent == NIL) root = i;

  printf("Preorder\n");
  Preorder(root);
  printf("\n");

  printf("Inorder\n");
  Inorder(root);
  printf("\n");

  printf("Postorder\n");
  Postorder(root);
  printf("\n");

  return 0;
}

void Preorder(int x){
  if(x == NIL) return;
  printf(" %d",x);
  Preorder(Tree[x].left);
  Preorder(Tree[x].right);
}

void Inorder(int x){
  if(x == NIL) return;
  Inorder(Tree[x].left);
  printf(" %d",x);
  Inorder(Tree[x].right);
}

void Postorder(int x){
  if(x == NIL) return;
  Postorder(Tree[x].left);
  Postorder(Tree[x].right);
  printf(" %d",x);
}

