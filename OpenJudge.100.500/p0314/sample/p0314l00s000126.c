#include<stdio.h>

#define N 10000

struct node{
  int p,l,r;
};
struct node T[N];

void preOrder(int);
void inOrder(int);
void postOrder(int);

int n;

void preOrder(int u){
  if(u == -1){
    return;
  }
  printf(" %d",u);
  preOrder(T[u].l);
  preOrder(T[u].r);
}

void inOrder(int u){
  if(u == -1){
    return;
  }
  inOrder(T[u].l);
  printf(" %d",u);
  inOrder(T[u].r);
}

void postOrder(int u){
  if(u == -1){
    return;
  }
  postOrder(T[u].l);
  postOrder(T[u].r);
  printf(" %d",u);
}

int main(){
  int i,u,l,r,root;
  scanf("%d",&n);
  for(i = 0;i < n;i++){
    T[i].p=-1;
  }
  for(i = 0;i < n;i++){
    scanf("%d%d%d",&u,&l,&r);
    T[u].l = l;
    T[u].r = r;
    if(l != -1){
      T[l].p=u;
    }
    if(r != -1){
      T[r].p=u;
    }
  }
  for(i = 0;i < n;i++){
    if(T[i].p == -1){
      root = i;
    }
  }
  printf("Preorder\n");
  preOrder(root);
  printf("\n");
  printf("Inorder\n");
  inOrder(root);
  printf("\n");
  printf("Postorder\n");
  postOrder(root);
  printf("\n");
  return 0;
}