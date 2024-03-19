#include<stdio.h>
#define nil -1

struct node{
  int parent;
  int left;
  int right;
};

typedef struct node tree;
tree A[100000];

int number;


void Preorder(int root){
  
  if (root==nil){return ;}

  printf(" %d",root);

  Preorder(A[root].left);
  Preorder(A[root].right);
}



void Inorder(int root){
   if (root==nil){return ;}

   Inorder(A[root].left);
   printf(" %d",root);
   Inorder(A[root].right);
}




void Postorder(int root){
if (root==nil){return ;}

 Postorder(A[root].left);
 Postorder(A[root].right);

 printf(" %d",root);

}

int main(){
  scanf("%d",&number);
  
  int i;
  
  
  
  for(i=0;i<number;i++){
    A[i].parent=A[i].right=A[i].left=-1;
  }
  
  
  int r1,r2;
  int a;
  for(i=0;i<number;i++){
    scanf("%d%d%d",&a,&r1,&r2);
    
    A[a].left=r1;
    A[a].right=r2;
    
    if(r1!=-1)A[r1].parent=a;
    if(r2!=-1)A[r2].parent=a;
    
  }
  
  int root=0;

   for(i=0 ; i<number ; i++){
    if(A[i].parent==-1){root=i;}
  }

   
   printf("Preorder\n");
   Preorder(root);
   printf("\n");

   printf("Inorder\n");
   Inorder(root);
   printf("\n");

   
   printf("Postorder\n");
   Postorder(root);
   printf("\n");
   
  
  return 0;
}

