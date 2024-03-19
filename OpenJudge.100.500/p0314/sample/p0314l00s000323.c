#include<stdio.h>
#define NIL -1

typedef struct node{
  int p;
  int r;
  int k;
}Node;

Node T[25];

void Preorder(int u){
  if(u == NIL)return;
  printf(" %d",u);
  Preorder(T[u].k);
  Preorder(T[u].r);
  
}

void Inorder(int u){
  if(u == NIL)return;
  Inorder(T[u].k);
  printf(" %d",u);
  Inorder(T[u].r);
  
}

void Postorder(int u){
  if(u == NIL)return;
  Postorder(T[u].k);
  Postorder(T[u].r);
  printf(" %d",u);
  
}




int main(){
  int n,i,j;
  int v,k,r;
  int root;

  scanf("%d",&n);


  for(i=0;i<n;i++){
    T[i].p = NIL;
    T[i].k = NIL;
    T[i].r = NIL;
  }

  for(i=0;i<n;i++){
    scanf("%d%d%d",&v,&k,&r);
    T[v].k = k;
    T[v].r = r;
    if(k != NIL)T[k].p = v;
    if(r != NIL)T[r].p = v;
  }

  for (i=0;i<n;i++) {
    if (T[i].p == NIL) root = i;
  }
  

  printf("Preorder\n");
  Preorder(root);
  printf("\nInorder\n");
  Inorder(root);
  printf("\nPostorder\n");
  Postorder(root);
  puts("");
  return 0;

    
}

