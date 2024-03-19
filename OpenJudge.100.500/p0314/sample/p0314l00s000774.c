#include<stdio.h>
#define MAX 100005
#define NIL -1

struct Node{ int p, l, r,key;};
struct Node T[MAX];

int n, S[MAX],DG[MAX],H[MAX], D[MAX];

void PreorderTreeWalk(int u){
  printf(" %d",u);
  if(T[u].l != NIL)PreorderTreeWalk(T[u].l);
  if(T[u].r != NIL)PreorderTreeWalk(T[u].r);
}

void InorderTreeWalk(int u){
  if(T[u].l != NIL)InorderTreeWalk(T[u].l);
  printf(" %d",u);
  if(T[u].r != NIL)InorderTreeWalk(T[u].r);
}

void PostorderTreeWalk(int u){
  if(T[u].l != NIL)PostorderTreeWalk(T[u].l);
  if(T[u].r != NIL)PostorderTreeWalk(T[u].r);
  printf(" %d",u);
}

int main(){
  int i,v,l,r;

  scanf("%d", &n);

  for ( i = 0; i < n; i++ ) {
    T[i].p = T[i].l = T[i].r = NIL;
  }

  for ( i = 0; i < n; i++ ){
    scanf("%d %d %d", &v,&l,&r);
    /*make tree*/
    T[v].l = l;
    T[v].r = r;
    if(l != NIL)T[l].p = v;
    if(r != NIL)T[r].p = v;
  }
 
  printf("Preorder\n");
  for(i=0; i<n; i++){
    if(T[i].p == NIL)PreorderTreeWalk(i);
  }
  printf("\n");

 printf("Inorder\n");
  for(i=0; i<n; i++){
    if(T[i].p == NIL)InorderTreeWalk(i);
  }
  printf("\n");

 printf("Postorder\n");
  for(i=0; i<n; i++){
    if(T[i].p == NIL)PostorderTreeWalk(i);
  }
  printf("\n");

  return 0;
  
}