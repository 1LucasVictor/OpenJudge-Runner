#include <stdio.h>
#include <stdlib.h>
 
#define M 500000
#define P 10
 
struct node{
 int right;
 int left;
 int parent;
 int key;
};
typedef struct node Node;
 
Node root[30];
 
void inorder(Node);
void preorder(Node);
void postorder(Node);
int find(int);
 
int n;
 
int main() {
 
  int k,i,l,p;
 
  scanf("%d",&n);
 
  for (i=0 ; i<n ; i++){
    scanf("%d",&l);
    if(i==0)p=l;
    root[l].key=l;
    scanf("%d %d",&root[l].left,&root[l].right);
    }
 
    if(root[p].left==-1 && root[p].right==-1){
      p=find(root[p].key);
      }
 
    printf("Preorder\n");
    preorder(root[p]);
    printf("\n");
    printf("Inorder\n");
    inorder(root[p]);
    printf("\n");
    printf("Postorder\n");
    postorder(root[p]);
    printf("\n");
 
  return 0;
}
 
 
void inorder(Node r){
 
    if(r.left!=-1) inorder(root[r.left]);
    printf(" %d",r.key);
    if(r.right!=-1)inorder(root[r.right]);
 
}
 
 
void preorder(Node r){
 
      printf(" %d",r.key);
      if(r.left!=-1) preorder(root[r.left]);
      if(r.right!=-1)preorder(root[r.right]);
 
}
 
void postorder(Node r){
 
  if(r.left!=-1) postorder(root[r.left]);
  if(r.right!=-1)postorder(root[r.right]);
  printf(" %d",r.key);
 
}
 
int find(int x){
 
int i,a,c=0;
 
for(i=0 ; i<n ; i++){
    if(root[i].left==x) {
    a=find(root[i].key);
    c++;
  }
    if(root[i].right==x) {
      a=find(root[i].key);
      c++;
    }
}
 
  if(c!=0)  return a;
  else return x;
}  
  
