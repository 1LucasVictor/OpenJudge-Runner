#include<stdio.h>

#define N 25
#define NIL -1

struct Node{
  int p,l,r;
};

struct Node T[N];
int n,D[N],H[N];

void setDepth(int,int);
int setHeight(int);
int getSibling(int);
void print(int);
void preorder(int);
void inorder(int);
void postorder(int);

int main(void){
  int v,l,r,root=0;
  int i,j;

  scanf(" %d",&n);
  for(i = 0; i < n; i++)T[i].p = NIL;

  for(i = 0; i < n; i++){
    scanf(" %d %d %d",&v,&l,&r);
    T[v].l = l;
    T[v].r = r;
    if(l != NIL) T[l].p = v;
    if(r != NIL) T[r].p = v;
  }

  for(i = 0; i < n; i++){
    if(T[i].p == NIL) root = i;
  }

  setDepth(root,0);
  setHeight(root);

  printf("Preorder\n");
  preorder(root);
  printf("\n");
  printf("Inorder\n");
  inorder(root);
  printf("\n");
  printf("Postorder\n");
  postorder(root);
  printf("\n");
  
  return 0;
}

void setDepth(int u, int d){
  if(u == NIL) return;
  D[u] = d;
  setDepth(T[u].l,d+1);
  setDepth(T[u].r,d+1);
}

int setHeight(int u){
  int h1=0,h2=0;
  if(T[u].l != NIL){
    h1 = setHeight(T[u].l)+ 1;
  }
  if(T[u].r != NIL){
    h2 = setHeight(T[u].r)+ 1;
  }
  return H[u] = (h1 > h2 ? h1 : h2);
}

int getSibling(int u){
  if(T[u].p == NIL)return NIL;
  if(T[T[u].p].l != u && T[T[u].p].l != NIL){
    return T[T[u].p].l;
  }
  if(T[T[u].p].r != u && T[T[u].p].l != NIL){
    return T[T[u].p].r;
  }
  return NIL;
}

void print(int u){
  printf("node %d: ",u);
  printf("parent = %d, ",T[u].p);
  printf("sibling = %d, ",getSibling(u));
  int deg = 0;
  if(T[u].l != NIL)deg++;
  if(T[u].r != NIL)deg++;
  printf("degree = %d, ",deg);
  printf("depth = %d, ",D[u]);
  printf("height = %d, ",H[u]);

  if(T[u].p == NIL){
    printf("root\n");
  }
  else if(T[u].l == NIL && T[u].r == NIL){
    printf("leaf\n");
  }
  else{
    printf("internal node\n");
  }
}

void preorder(int u){
  printf(" %d",u);
  if(T[u].l != NIL) preorder(T[u].l);
  if(T[u].r != NIL) preorder(T[u].r);
}

void inorder(int u){
  if(T[u].l != NIL) inorder(T[u].l);
  printf(" %d",u);
  if(T[u].r != NIL) inorder(T[u].r);
}

void postorder(int u){
  if(T[u].l != NIL) postorder(T[u].l);
  if(T[u].r != NIL) postorder(T[u].r);
  printf(" %d",u);
}

