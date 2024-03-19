#include<stdio.h>
#include<stdlib.h>

typedef struct{
  int parent;
  int left;
  int right;
  int key;
}Node;

Node Tree[25];

void inorder(int x){

  if(x != -1){
    inorder(Tree[x].left);
    printf(" %d", Tree[x].key);
    inorder(Tree[x].right);
  }
}

void preorder(int x){

  if(x != -1){
    printf(" %d", Tree[x].key);
    preorder(Tree[x].left);
    preorder(Tree[x].right);
  }
}

void postorder(int x){

  if(x != -1){
    postorder(Tree[x].left);
    postorder(Tree[x].right);
    printf(" %d", Tree[x].key);
  }
}

int main(){

  int n,i,j,id,child,root;
 
  scanf("%d",&n);

  for(i = 0 ; i < n ; i++){
    Tree[i].parent = -1;
    Tree[i].left = -1;
    Tree[i].right = -1;
  }

  for(i = 0 ; i < n ; i++){
    scanf("%d",&id);
    Tree[id].key = id;

    for(j = 0 ; j < 2 ; j++){

      scanf("%d",&child);
      if(child != -1) 
	Tree[child].parent = id;

      if(j == 0)
	Tree[id].left = child;
      else if(j == 1){
	Tree[id].right = child;
      }
    }
  }

  for(i=0; i<n; i++){
    if(Tree[i].parent == -1){
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