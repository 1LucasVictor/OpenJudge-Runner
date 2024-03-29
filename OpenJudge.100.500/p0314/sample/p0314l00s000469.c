#include <stdio.h>
#define M 10000
#define NIL -1
 
typedef struct{
  int p,l,r;
}Node;
 
Node T[M];
int n;
 
void pre(int u)
{
  if(u == NIL){
    return;
  }
  printf(" %d",u);
  pre(T[u].l);
  pre(T[u].r);
}
 
void in(int u){
  if(u == NIL){
    return;
  }
  in(T[u].l);
  printf(" %d", u);
  in(T[u].r);
}
void post(int u){
  if(u == NIL){
    return;
  }
  post(T[u].l);
  post(T[u].r);
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
      if(T[i].p == NIL){
	root = i;
      }
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
 