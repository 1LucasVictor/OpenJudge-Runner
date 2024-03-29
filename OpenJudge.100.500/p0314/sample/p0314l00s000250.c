#include<stdio.h>
typedef struct{
  int parent;
  int left;
  int right;
} Tree;
#define NIL -1
Tree tree[10000];
void Preorder(int);
void Inorder(int);
void Postorder(int);
int main()
{
  int i,id,j,n,k,depth=0,num,l,r,degree=0,height=0;
 
  scanf("%d",&n);
 
  for(i=0;i<n;i++){
    tree[i].parent=NIL;
  }
 
  for(i=0;i<n;i++){
    scanf("%d%d%d",&id,&l,&r);
    tree[id].left=l;
    tree[id].right=r;
    if(l!=NIL && r!=NIL){
      tree[l].parent=id;
      tree[r].parent=id;
    }
    else if(l!=NIL && r==NIL){
      tree[l].parent=id;
    }
    else if(l==NIL && r!=NIL){
      tree[r].parent=id;
    }
  }
  for(j=tree[0].parent;tree[j].parent!=NIL;j=tree[j].parent);
  printf("Preorder\n");
  Preorder(j);
  printf("\nInorder\n");
  Inorder(j);
  printf("\nPostorder\n");
  Postorder(j);
  printf("\n");

  return 0;
}

void Preorder(int i)
{
  printf(" %d",i);
  if(tree[i].left!=NIL){
    Preorder(tree[i].left);
  }
  if(tree[i].right!=NIL){
    Preorder(tree[i].right);
  }
  
}
void Inorder(int i)
{
  if(tree[i].left!=NIL && tree[i].right!=NIL){
    Inorder(tree[i].left);
    printf(" %d",i);
    Inorder(tree[i].right);
 
  }
  if(tree[i].left!=NIL && tree[i].right==NIL){
    //printf(" %d",i);   
   Inorder(tree[i].left);
     printf(" %d",i);   
  } 
 
  if(tree[i].right!=NIL && tree[i].left==NIL){ 
  printf(" %d",i);
 Inorder(tree[i].right);  
 
  } 
  if(tree[i].left==NIL && tree[i].right==NIL)printf(" %d",i);

}
void Postorder(int i)
{
  if(tree[i].left==NIL && tree[i].right==NIL){
    printf(" %d",i);
  }
  else if(tree[i].left!=NIL && tree[i].right==NIL){
    Postorder(tree[i].left);
     printf(" %d",i);
  }
  else if(tree[i].right!=NIL && tree[i].left==NIL){
    Postorder(tree[i].right); 
     printf(" %d",i);
  } 
  else{
    Postorder(tree[i].left);
    Postorder(tree[i].right); 
     printf(" %d",i);
  }
}