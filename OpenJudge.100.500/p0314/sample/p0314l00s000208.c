#include<stdio.h>
 
#define MAX 10000
#define NIL -1
 
struct node{
  int parent, left, right;
};
 
struct node T[MAX];
int n;
 
void PreOrder(int);
void InOrder(int);
void PostOrder(int);
 
int main(){
  int v, l, r;
  int root;
  int i;
 
  scanf("%d", &n);
  for(i=0;i<n;i++){
    T[i].parent=NIL;
  }
 
  for(i=0;i<n;i++){
    scanf("%d%d%d", &v, &l, &r);
    T[v].left = l;
    T[v].right = r;     
    if(l != NIL) T[l].parent = v;
    if(r != NIL) T[r].parent = v;
  }
 
  for(i=0; i<n; i++)
    if(T[i].parent == NIL)root = i;
  
  printf("Preorder\n");
  PreOrder(root);
  printf("\n");
 
  printf("Inorder\n");
  InOrder(root);
  printf("\n");
 
  printf("Postorder\n");
  PostOrder(root);
  printf("\n");
   
  return 0;
}
 
void PreOrder(int u){
  if(u == NIL)return;
  printf(" %d",u);
  PreOrder(T[u].left);
  PreOrder(T[u].right);
} 
void InOrder(int u){
  if(u == NIL)return;
  InOrder(T[u].left);
  printf(" %d",u);
  InOrder(T[u].right);
}
void PostOrder(int u){
  if(u == NIL) return;   
  PostOrder(T[u].left);
  PostOrder(T[u].right);
  printf(" %d",u);
}

