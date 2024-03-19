#include<stdio.h>
#include<stdlib.h>

typedef struct{
  int parent;
  int left;
  int right;
  int key;
}Tree;

Tree T[25];

void inorder(int x){
  if(x != -1){
    inorder(T[x].left);
    printf(" %d", T[x].key);
    inorder(T[x].right);
  }
}

void preorder(int x){
  if(x != -1){
    printf(" %d", T[x].key);
    preorder(T[x].left);
    preorder(T[x].right);
  }
}

void postorder(int x){
  if(x != -1){
    postorder(T[x].left);
    postorder(T[x].right);
    printf(" %d", T[x].key);
  }
}

int main(){
  int n, i, j, id, root, child;

  scanf("%d",&n);

  for(i = 0 ; i < n ; i++){
    T[i].parent = -1;
    T[i].left = -1;
    T[i].right = -1;
  }

  for(i = 0 ; i < n ; i++){
    scanf("%d", &id);
    T[id].key = id;

    for(j = 0 ; j <= 1 ; j++){

      scanf("%d",&child);
      if(child != -1) T[child].parent = id;

      if(j == 0) T[id].left = child;
      else if(j == 1) T[id].right = child;
    }
  }

  for(i = 0; i < n; i++){
    if(T[i].parent == -1){
      root = i;
      break;
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