#include <stdio.h>
#include <limits.h>
#define null -1

typedef struct {
  int parent,left,right;
} node;

node tree[25];

void print(int);
void Preorder(int);
void Inorder(int);
void Postorder(int);

int n;

int main(){
  scanf("%d",&n);
  int i,j;
  int id;

  for(i=0;i<n;i++){
    tree[i].parent=tree[i].right=tree[i].left=null;
  }
  
  for(i=0;i<n;i++){
    scanf("%d",&id);
   
    scanf("%d%d",&tree[id].left,&tree[id].right);
    // printf("test;%d %d;\n",tree[id].left,tree[id].right);
    tree[tree[id].left].parent=id;
    tree[tree[id].right].parent=id;
    //  printf("test;%d %d;\n",tree[tree[id].left].parent,tree[tree[id].right].parent);
  }
  int root;
  for(i=0;i<n;i++){
    if(tree[i].parent==null)
      root=i;
  }
    print(root);
   
  return 0;
}

void print(int id){
  int i;
  printf("Preorder\n");
  
    Preorder(id);
  printf("\n");
  
  printf("Inorder\n");
  
    Inorder(id);
  printf("\n");
  
  printf("Postorder\n");
 
    Postorder(id);
  printf("\n");
}

void Preorder(int u){
  if(u==null) return;
  printf(" %d",u);
  Preorder(tree[u].left);
  Preorder(tree[u].right);
}

void Inorder(int u){
  if(u==null) return;
  Inorder(tree[u].left);
  printf(" %d",u);
  Inorder(tree[u].right);
}

void Postorder(int u){
  if(u==null) return;
  Postorder(tree[u].left);
  Postorder(tree[u].right);
  printf(" %d",u);
}

