#include<stdio.h>
#define N 25
typedef struct{
  int p;
  int l;
  int r;
}Node;
   
void preorder(int);
void inorder(int);
void postorder(int);
   
Node T[N];
int main(){
  int num, i, j, id, le, ri;
  scanf("%d\n",&num);
  for(i = 0 ; i < num ; i++){
    T[i].p =T[i].l =T[i].r =-1;
  }
  for(i = 0 ; i < num ; i++){
    scanf("%d%d%d", &id, &le, &ri);
    T[id].l = le;
    T[le].p = id;
    T[id].r = ri;
    T[ri].p = id;
  }
  printf("Preorder\n");
  for(i = 0 ; i < num ; i++){
    if(T[i].p == -1){
      preorder(i);
    }
  }
  printf("\n");
  printf("Inorder\n");
  for(i = 0 ; i < num ; i++){
    if(T[i].p == -1){
      inorder(i);
    }
  }
  printf("\n");
  printf("Postorder\n");
  for(i = 0 ; i < num ; i++){
    if(T[i].p == -1){
      postorder(i);
    }
  }
  printf("\n");
  return 0;
}
   
void preorder(int u)
{
  if(u == -1) return;
  printf(" %d", u);
  preorder(T[u].l);
  preorder(T[u].r);
}
void inorder(int u)
{
  if(u == -1) return;
  inorder(T[u].l);
  printf(" %d", u);
  inorder(T[u].r);
}
   
void postorder(int u)
{
  if(u == -1) return;
  postorder(T[u].l);
  postorder(T[u].r);
  printf(" %d", u);
}
