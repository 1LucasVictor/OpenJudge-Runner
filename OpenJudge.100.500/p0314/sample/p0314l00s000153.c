#include <stdio.h>
#define NIL -1

struct Node{
  int p,left,right;
};
struct Node T[1000000];
int n;

void preorder(int);
void inorder(int);
void postorder(int);

int main(){
  int id,i,left,right,root;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    T[i].p = NIL;
  }

  for(i=0;i<n;i++){
    scanf("%d %d %d",&id,&left,&right);
    T[id].left = left;
    T[id].right = right;

    if(left != NIL){
      T[left].p = id;
    }

    if(right != NIL){
      T[right].p = id;
    }

  }

  for(i=0;i<n;i++){
    if(T[i].p == NIL){
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


void preorder(int u){
  if(u == NIL) return;
  printf(" %d",u);
  preorder(T[u].left);
  preorder(T[u].right);
}

void inorder(int u){
  if(u == NIL) return;
  inorder(T[u].left);
  printf(" %d",u);
  inorder(T[u].right);
}
void postorder(int u){
  if(u == NIL) return;
  postorder(T[u].left);
  postorder(T[u].right);
  printf(" %d",u);
}

