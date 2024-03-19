#include<stdio.h>
#define M 10000
#define NIL (-1)

typedef struct{
  int parent,left,right;
}node;

node t[M];


void preparse(int);
void inparse(int);
void postparse(int);

int main(){
  int n,i,v,left,right,root;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    t[i].parent = NIL;
  }
  for(i=0;i<n;i++){
    scanf("%d %d %d",&v,&left,&right);
    t[v].left = left;
    t[v].right = right;
    if(left != NIL) t[left].parent = v;
    if(right != NIL) t[right].parent = v;
  }

  for(i=0;i<n;i++) if(t[i].parent == NIL) root = i;

  printf("Preorder\n");
  preparse(root);
  printf("\n");
  printf("Inorder\n");
  inparse(root);
  printf("\n");
  printf("Postorder\n");
  postparse(root);
  printf("\n");
  
  return 0;
}

void preparse(int n){
  if(n == NIL) return;
  printf(" %d",n);
  preparse(t[n].left);
  preparse(t[n].right);

}

void inparse(int n){
  if(n==NIL) return;

  inparse(t[n].left);
  printf(" %d",n);
  inparse(t[n].right);

}

void postparse(int n){
  if(n==NIL) return;

  postparse(t[n].left);
  postparse(t[n].right);
  printf(" %d",n);

}

