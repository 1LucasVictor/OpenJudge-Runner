#include <stdio.h>
 
typedef struct{
  int id;
  int left;
  int right;
  int parent;
} node;
 
node tree[25];
 
void inorder(int);
void preorder(int);
void postorder(int);
 
int main(){
 
  int n,i,j,count,k,m,l,r;
 
 
  scanf("%d",&n);
 
  for(i=0;i<n;i++) tree[i].parent = -1;
   
  for(i=0;i<n;i++){
    scanf("%d",&m);
    tree[m].id = m;
    scanf("%d%d",&tree[m].left,&tree[m].right);
    tree[tree[m].left].parent = tree[m].id;
    tree[tree[m].right].parent = tree[m].id;
  }
 
   
   
  for(i=0;tree[i].parent != -1;i++);
  printf("Preorder\n");
  preorder(i);
  printf("\n");
  printf("Inorder\n");
  inorder(i);
  printf("\n");
  printf("Postorder\n");
  postorder(i);
  printf("\n");
   
  return 0;
}    
     
     
void preorder(int x){
   printf(" %d",tree[x].id);
   if(tree[x].left != -1) preorder(tree[x].left);
   if(tree[x].right != -1) preorder(tree[x].right);
}
void inorder(int x){
   if(tree[x].left != -1) inorder(tree[x].left);
   printf(" %d",tree[x].id);
   if(tree[x].right != -1) inorder(tree[x].right);
}
void postorder(int x){
   if(tree[x].left != -1) postorder(tree[x].left);
   if(tree[x].right != -1) postorder(tree[x].right);
   printf(" %d",tree[x].id);
}