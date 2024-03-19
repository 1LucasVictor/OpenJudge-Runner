#include <stdio.h>
#include <stdlib.h>

struct node{
  int parent, left, right;
};
struct node *t;

void pre(int u){
  if(u == -1){
    return;
  }
  printf(" %d", u);
  pre(t[u].left);
  pre(t[u].right);
}

void in(int u){
  if(u == -1){
    return;
  }
  in(t[u].left);
  printf(" %d", u);
  in(t[u].right);
}

void pos(int u){
  if(u == -1){
    return;
  }
  pos(t[u].left);
  pos(t[u].right);
  printf(" %d", u);
}

int root(int n){
  int i;
  for(i = 0; i < n; i++){
    if(t[i].parent == -1){
      return i;
    }
  }
}

int main(void){
  int i, n, x;
  scanf("%d", &n);
  t = (struct node *)malloc(n * sizeof(struct node));
  for(i = 0; i < n; i++){
    t[i].parent = -1;
  }
  
  for(i = 0; i < n; i++){
    scanf("%d", &x);
    scanf("%d %d", &t[x].left, &t[x].right);
    if(t[x].left != -1){
      t[t[x].left].parent = x;
    }
    if(t[x].right != -1){
      t[t[x].right].parent = x;
    }
  }

  x = root(n);

  printf("Preorder\n");
  pre(x);
  printf("\n");
  printf("Inorder\n");
  in(x);
  printf("\n");
  printf("Postorder\n");
  pos(x);
  printf("\n");
  
  return 0;
}
