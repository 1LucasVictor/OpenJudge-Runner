#include<stdio.h>

#define MAX 100000
#define NIL -1

struct Node{
  int le;
  int ri;
  int pa;
};
struct Node T[MAX];

void pre(int);
void in(int);
void post(int);

int main(){
  int n,i;
  int v,l,r,root;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    T[i].pa=NIL;
  }

  for(i=0;i<n;i++){
    scanf("%d %d %d",&v,&l,&r);
    T[v].le=l;
    T[v].ri=r;
    if(l!=NIL) T[l].pa=v;
    if(r!=NIL) T[r].pa=v;
  }

  for(i=0;i<n;i++) if(T[i].pa==NIL) root=i;

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

void pre(int a){
  if(a==NIL) return;
  printf(" %d",a);
  pre(T[a].le);
  pre(T[a].ri);
}

void in(int a){
  if(a==NIL) return;
  in(T[a].le);
  printf(" %d",a);
  in(T[a].ri);
}

void post(int a){
  if(a==NIL) return;
  post(T[a].le);
  post(T[a].ri);
  printf(" %d",a);
}

