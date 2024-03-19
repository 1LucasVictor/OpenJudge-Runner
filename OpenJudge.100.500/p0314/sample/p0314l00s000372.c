#include<stdio.h>
#define N 25
struct Node{
  int right;
  int left;
  int parent;
};
struct Node T[N];

void preorder(int id){
  if(id!=-1){
    printf(" %d",id);
    preorder(T[id].left);
    preorder(T[id].right);
  }
}

void inorder(int id){
  if(id !=-1){
    inorder(T[id].left);
    printf(" %d",id);
    inorder(T[id].right);
  }
}

void postorder(int id){
  if(id !=-1){
    postorder(T[id].left);
    postorder(T[id].right);
    printf(" %d",id);
  }
}


int main(){
  int n,i;
  int id;
  int r;
  scanf("%d",&n);
  for(i=0;i<n;i++) T[i].parent = T[i].left = T[i].right = -1;
  for(i=0;i<n;i++){
    scanf("%d",&id);
    scanf("%d%d",&T[id].left,&T[id].right);
    if(T[id].left==-1) T[T[id].left].parent = id;
    if(T[id].right==-1) T[T[id].right].parent = id;
  }
  for(i=0;i<n;i++){
    if(T[i].parent==-1){
      r = i;
      break;
    }

  }
  printf("Preorder\n");
  preorder(r);
  printf("\n");
  printf("Inorder\n");
  inorder(r);
  printf("\n");
  printf("Postorder\n");
  postorder(r);
  printf("\n");
  return 0;
}