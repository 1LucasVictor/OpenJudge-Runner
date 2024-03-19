#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int parent;
  int left;
  int right;
}Node;

Node T[25];
int n;

void maigoCenter(void);
void printPreorder(int);
void printInorder(int);
void printPostorder(int);


int main(){
  int i, id, root;

  scanf("%d", &n);

  for(i=0; i<n; i++){
    scanf("%d", &id);
    scanf("%d%d", &T[id].left, &T[id].right);
    T[id].parent = -1;
  }

  maigoCenter();

  for(i=0; i<n; i++){
    if(T[i].parent == -1){
      root = i;
      break;
    }
  }

  printf("Preorder\n");

  printPreorder(root);

  printf("\nInorder\n");

  printInorder(root);

  printf("\nPostorder\n");

  printPostorder(root);

  printf("\n");

  return 0;
}

void maigoCenter(void){
  int i;

  for(i=0; i<n; i++){
    if(T[i].left != -1){
      T[T[i].left].parent = i;
    }
    if(T[i].right != -1){
      T[T[i].right].parent = i;
    }
  }

} 

int findSibling(int n){
  if(T[n].parent != -1){
    if(T[T[n].parent].left == n){
      return T[T[n].parent].right;
    }else {
      return T[T[n].parent].left;
    }
  }
    return -1;
}

void printPreorder(int root){
  printf(" %d", root);

  if(T[root].left != -1){
    printPreorder(T[root].left);
  }

  if(T[root].right != -1){
    printPreorder(T[root].right);
  }

}

void printInorder(int root){

  if(T[root].left != -1){
    printInorder(T[root].left);
  }

  printf(" %d", root);

  if(T[root].right != -1){
    printInorder(T[root].right);
  }

}

void printPostorder(int root){

  if(T[root].left != -1){
    printPostorder(T[root].left);
  }

  if(T[root].right != -1){
    printPostorder(T[root].right);
  }

  printf(" %d", root);

}