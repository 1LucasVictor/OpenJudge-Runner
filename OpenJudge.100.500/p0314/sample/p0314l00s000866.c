#include <stdio.h>
#define M 10000
#define NIL -1

typedef struct{
  int p,l,r;
}Node;

Node T[M];
int n;

void preOrder(int u)
{
  if(u == NIL)return;
  printf(" %d",u);
  preOrder(T[u].l);
  preOrder(T[u].r);
}

void inOrder(int u){
  if(u == NIL)return;
  inOrder(T[u].l);
  printf(" %d", u);
  inOrder(T[u].r);
}
void postOrder(int u){
  if(u == NIL)return;
  postOrder(T[u].l);
  postOrder(T[u].r);
  printf(" %d",u);
}

int main(){
  int i,v,l,r,root;

  scanf("%d",&n);
  for(i = 0; i <n;i++)
    {
      T[i].p =NIL;
    }
  for(i = 0;i<n;i++)
    {
      scanf("%d %d %d",&v,&l,&r);
      T[v].l = l;
      T[v].r = r;
      if(l != NIL) T[l].p = v;
      if(r != NIL) T[r].p = v;
    }
  for(i = 0; i < n;i++)
    {
    if(T[i].p == NIL)root = i;
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


  
  