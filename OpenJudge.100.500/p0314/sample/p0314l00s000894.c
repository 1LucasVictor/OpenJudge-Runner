#include <stdio.h>
#define MAX 100
 
void Preorder(int);
void Inorder(int);
void Postorder(int);
 
struct Node{
  int parent, left, right;
};
  
struct Node Tree[MAX];
int n;
 
void Preorder(int i){
  printf(" %d",i);
  if ( Tree[i].left != -1 ) Preorder( Tree[i].left );
  if ( Tree[i].right != -1 ) Preorder( Tree[i].right );
}
 
void Inorder(int i){
  if( Tree[i].left != -1 ) Inorder( Tree[i].left );
  printf(" %d",i);
  if( Tree[i].right != -1 ) Inorder( Tree[i].right);
}
   
void Postorder(int i){ 
  if( Tree[i].left != -1 ) Postorder( Tree[i].left );
  if( Tree[i].right != -1 ) Postorder( Tree[i].right );
  printf(" %d",i);
   
}
 
int main(){
  int root = 0,i,j,a;
  scanf("%d",&n);
  
  for( i = 0 ; i < n ; i++ ){
    Tree[i].parent = -1;
    Tree[i].left = -1;
    Tree[i].right = -1;
  }
 
  for( i = 0; i < n ; i++ ){
    scanf("%d", &a);
    scanf("%d %d", &Tree[a].left, &Tree[a].right);
    if(Tree[a].left != -1) Tree[Tree[a].left].parent = a;
    if(Tree[a].right != -1) Tree[Tree[a].right].parent = a;
  }
 
  for( i = 0 ; i < n ; i++ ){
    if( Tree[i].parent == -1 ) root = i;
  }
 
  printf("Preorder\n");
  Preorder(root);
 
  printf("\nInorder\n");
  Inorder(root);
 
  printf("\nPostorder\n");
  Postorder(root);
  printf("\n");
 
  return 0;
}
 