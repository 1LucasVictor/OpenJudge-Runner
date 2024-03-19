#include<stdio.h>
#define MAX 100000
#define NIL -1
int n;
typedef struct{
  int parent,left,right;
}tree;
tree T[MAX];

void preparse(int u){
  if( u == NIL)return;
  printf(" %d",u);
  preparse(T[u].left);
  preparse(T[u].right);
}

void inorder(int u){
  if( u == NIL)return;
  inorder(T[u].left);
  printf(" %d",u);
  inorder(T[u].right);
}

void postorder(int u){
  if( u == NIL)return;
  postorder(T[u].left);
  postorder(T[u].right);
  printf(" %d",u);
}

int main(){
  int i,id,l,r,root;
  
  scanf("%d",&n);

  for(i=0; i<n; i++){
    T[i].parent = NIL;
  }
  
  for(i=0; i<n; i++){
    scanf("%d %d %d",&id, &l, &r);
    T[id].left = l;
    T[id].right = r;
    if(l != NIL) T[l].parent = id ;
    if(r != NIL) T[r].parent = id ;
  }

  for(i=0; i<n; i++) if(T[i].parent == NIL)
		       root =i;

  printf("Preorder\n");
  preparse(root);
  printf("\n");
    
  printf("Inorder\n");
  inorder(root);
  printf("\n");
    
  printf("Postorder\n");
  postorder(root);
  printf("\n");
  
  return 0;
}

