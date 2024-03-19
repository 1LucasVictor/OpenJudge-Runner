#include<stdio.h> 
#define M 10001
#define NIL -1
void Preorder(int);
void Inorder(int);
void Postorder(int);
typedef struct Node{int p,l,r;}Node;
Node Tree[M];
int s;

int main(){
  int i,u,l,r,id;
  
  scanf("%d",&s);
  for(i = 0; i < s; i++){
    Tree[i].p = NIL;
  }
  
  for(i = 0; i < s; i++){
    scanf("%d %d %d",&id,&l,&r);     
    Tree[id].l = l;
    Tree[id].r = r;
    if(l != NIL) Tree[l].p = id;
    if(r != NIL) Tree[r].p = id;
  }
  
  for(i = 0; i < s; i++){
    if(Tree[i].p == NIL) u = i;
  }
  printf("Preorder\n");
  Preorder(u);
  printf("\nInorder\n");
  Inorder(u);
  printf("\nPostorder\n");
  Postorder(u);
  printf("\n");
  return 0;
}


void Preorder(int u){ 
  if(u == NIL) return;
  printf(" %d",u);
  Preorder(Tree[u].l);
  Preorder(Tree[u].r);
}

void Inorder(int u){ 
  if(u == NIL) return;
  Inorder(Tree[u].l);
  printf(" %d",u);
  Inorder(Tree[u].r);
}

void Postorder(int u){ 
  if(u == NIL) return;
  Postorder(Tree[u].l);
  Postorder(Tree[u].r);
  printf(" %d",u);
}

