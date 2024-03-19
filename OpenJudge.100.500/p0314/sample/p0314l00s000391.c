#include<stdio.h>

struct node{
  int id,l,r;
};

struct node T[25];

void pre(int u){
  if(u == -1) return;

  printf(" %d",u);
  pre(T[u].l);
  pre(T[u].r);
}

void in(int u){
  if(u == -1) return;

  in(T[u].l);
  printf(" %d",u);
  in(T[u].r);
}

void post(int u){
  if(u == -1) return;

  post(T[u].l);
  post(T[u].r);
  printf(" %d",u);
}

int main(){
  int i;
  int n,id,l,r,root;

  scanf("%d",&n);

  for(i=0; i<n; i++){
    T[i].id = -1;
  }

  for(i=0; i<n; i++){
    scanf("%d %d %d",&id,&l,&r);
    T[id].l = l;
    T[id].r = r;
    if(T[id].l != -1) T[T[id].l].id = id;
    if(T[id].r != -1) T[T[id].r].id = id;
  }

  for(i=0; i<n; i++){
    if(T[i].id == -1) root = i;
  }

  printf("Preorder\n");
  pre(root);
  printf("\n");
  printf("Inorder\n");
  in(root);
  printf("\n");
  printf("Postorder\n");
  post(root);
  printf("\n");

  return 0;
}
