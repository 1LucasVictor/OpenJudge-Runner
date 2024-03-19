#include <stdio.h>
#define N 10000
#define NIL -1

struct Node{
  int id;
  int left;
  int right;
};

struct Node Tree[N];
int n;

void preorder(int x){
  if(x == NIL) return;
  printf(" %d", x);
  preorder(Tree[x].left);
  preorder(Tree[x].right);
}

void inorder(int x){
  if(x == NIL) return;
  inorder(Tree[x].left);
  printf(" %d", x);
  inorder(Tree[x].right);
}

void postorder(int x){
  if(x == NIL) return;
  postorder(Tree[x].left);
  postorder(Tree[x].right);
  printf(" %d", x);
}

int main(){
  int i, v, left, right, root;

  scanf("%d", &n);
  for(i = 0; i < n; i++){
    Tree[i].id = NIL;
  }

  for(i = 0; i < n; i++){
    scanf("%d %d %d", &v, &left, &right);
    Tree[v].left = left;
    Tree[v].right = right;
    if(left != NIL){
      Tree[left].id = v;
    }
    if(right != NIL){
      Tree[right].id = v;
    }
  }

  for(i = 0; i < n; i++){
    if(Tree[i].id == NIL){
      root = i;
    }
  }

  printf("Preorder\n");
  preorder(root);
  printf("\n");
  printf("Inorder\n");
  inorder(root);
  printf("\n");
  printf("Postorder\n");
  postorder(root);
  printf("\n");

  return 0;
}

