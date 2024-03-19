#include<stdio.h>
#define nil -1
typedef struct{
  int p;
  int left;
  int right;
  int sibling;
  int depth;
  int height;
  int degree;
  
}Node;

Node N[100000];
int A[100000];
int count=0;

void Preorder(int );
void Inorder(int);
void Postorder(int);

int main(){

  int i,j,n,c,left,right,degree,tmp,root;

  scanf("%d",&n);
  
   for(i=0;i<n;i++){
    N[i].p=N[i].left=N[i].right=N[i].sibling=nil;
    N[i].depth=N[i].height=N[i].degree=0;
  }
  
  for(i=0;i<n;i++){
    scanf("%d %d %d",&tmp,&left,&right);
    N[tmp].left=left;
    N[tmp].right=right;
    if(left!=-1&&right!=-1){
      N[right].p=tmp;
      N[right].sibling=left;
      N[left].sibling=right;
      N[left].p=tmp;
      N[tmp].degree=2;
    }
    else if(left!=-1&&right==-1){
      N[left].p=tmp;
      N[tmp].degree=1;
    }
    else if(left==-1&&right!=-1){
      N[right].p=tmp;
      N[tmp].degree=1;
    }
  }
 

  for(i=0;i<n;i++)if(N[i].p==nil)root=i;
  
  printf("Preorder\n");
  count=0;
  Preorder(root);
  for(i=0;i<n;i++)printf(" %d",A[i]);
  
  printf("\nInorder\n");
 
  count=0;
  Inorder(root);
  for(i=0;i<n;i++)printf(" %d",A[i]);
  
  printf("\nPostorder\n");
  count=0;
  Postorder(root);
  for(i=0;i<n;i++)printf(" %d",A[i]);
  printf("\n");
  
  return 0;
}


void Preorder(int p){

  if(p==nil) return;

  A[count++]=p;
  Preorder(N[p].left);
  Preorder(N[p].right);
}

void Inorder(int p){
 
 if(p==nil) return;

 Inorder(N[p].left);
 A[count++]=p;
 Inorder(N[p].right);

}

void Postorder(int p){

 if(p==nil) return;
 Postorder(N[p].left);
 Postorder(N[p].right);
 A[count++]=p;
}