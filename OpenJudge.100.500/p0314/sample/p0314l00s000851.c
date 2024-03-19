#include<stdio.h>
#define NIL -1

typedef struct{
  int parent;
  int left;
  int right;
} Tree;

Tree t[10000];

void Preorder(int i){
  printf(" %d",i);
  if(t[i].left!=NIL){
    Preorder(t[i].left);
  }
  if(t[i].right!=NIL){
    Preorder(t[i].right);
  }
}

void Inorder(int i){
  if(t[i].left!=NIL && t[i].right!=NIL){
    Inorder(t[i].left);
    printf(" %d",i);
    Inorder(t[i].right);
  }
  if(t[i].left!=NIL && t[i].right==NIL){
    Inorder(t[i].left);
    printf(" %d",i);   
  } 
  if(t[i].right!=NIL && t[i].left==NIL){ 
    printf(" %d",i);
    Inorder(t[i].right);  
  } 
  if(t[i].left==NIL && t[i].right==NIL) printf(" %d",i);
}

void Postorder(int i){
  if(t[i].left==NIL && t[i].right==NIL){
    printf(" %d",i);
  }
  else if(t[i].left!=NIL && t[i].right==NIL){
    Postorder(t[i].left);
    printf(" %d",i);
  }
  else if(t[i].right!=NIL && t[i].left==NIL){
    Postorder(t[i].right); 
    printf(" %d",i);
  } 
  else{
    Postorder(t[i].left);
    Postorder(t[i].right); 
    printf(" %d",i);
  }
}

int main(){
  int i,id,j,n,k,num,l,r;
  int depth=0,degree=0,height=0;
 
  scanf("%d",&n);
  for(i=0;i<n;i++){
    t[i].parent=NIL;
  }
  for(i=0;i<n;i++){
    scanf("%d%d%d",&id,&l,&r);
    t[id].left=l;
    t[id].right=r;
    if(l!=NIL && r!=NIL){
      t[l].parent=id;
      t[r].parent=id;
    }
    else if(l!=NIL && r==NIL){
      t[l].parent=id;
    }
    else if(l==NIL && r!=NIL){
      t[r].parent=id;
    }
  }
  for(j=t[0].parent;t[j].parent!=NIL;j=t[j].parent);
  printf("Preorder\n");
  Preorder(j);
  printf("\nInorder\n");
  Inorder(j);
  printf("\nPostorder\n");
  Postorder(j);
  printf("\n");

  return 0;
}

