#include<stdio.h>
#include<stdlib.h>
typedef struct{
  int p; //parent element
  int l,r;    //child elements
}node;
void Preorder(int);
void Inorder(int);
void Postorder(int);
node *T;
int main(){
  int n, i, x, root;
  scanf("%d",&n);
  T = (node *)malloc(sizeof(node) * n);
  for(i=0; i<n; i++) T[i].p = -1;
  for(i=0; i<n; i++){
    scanf("%d",&x);
    scanf("%d%d",&T[x].l,&T[x].r);
    T[T[x].l].p = T[T[x].r].p = x;
  }
  for(i=0; i<n; i++){     //root search
    if(T[i].p == -1){
      root = i;
      break;
    }
  }
  printf("Preorder\n");
  Preorder(root);
  printf("\nInorder\n");
  Inorder(root);
  printf("\nPostorder\n");
  Postorder(root);
  printf("\n");
  free(T);
  return 0;
}

void Preorder(int x){
  if(x != -1){
    printf(" %d",x);
    Preorder(T[x].l);
    Preorder(T[x].r);
  }
  return;
}

void Inorder(int x){
  if(x != -1){
    Inorder(T[x].l);
    printf(" %d",x);
    Inorder(T[x].r);
  }
  return;
}

void Postorder(int x){
  if(x != -1){
    Postorder(T[x].l);
    Postorder(T[x].r);
    printf(" %d",x);
  }
  return;
}