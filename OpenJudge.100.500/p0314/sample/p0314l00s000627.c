#include<stdio.h>
#include<stdlib.h>
typedef struct list{
  int parent; 
  int left;
  int right;
}node_list;

void Preorder(node_list *,int);

void Inorder(node_list *,int);

void Postorder(node_list *,int);

int main(){
  int i,j,n,L,R,id;
  node_list *A;

  scanf("%d",&n);

  A = malloc(sizeof(node_list)*n);
  for(i=0;i<n;i++)A[i].parent = -1;
  for(i=0;i<n;i++){
    scanf("%d %d %d",&id,&L,&R);
    A[id].left = L;
    A[id].right = R;
    if(L != -1)A[L].parent = id;
    if(R != -1)A[R].parent = id;
  }
  for(i=0;i<n;i++)if(A[i].parent == -1)break;

  printf("Preorder\n");
  Preorder(A,i);
  printf("\n");
  
  printf("Inorder\n");
  Inorder(A,i);
  printf("\n");
  
  printf("Postorder\n");
  Postorder(A,i);
  printf("\n");
  free(A);
  return 0;
}
    
void Preorder(node_list *A,int i){
  printf(" %d",i);
  if(A[i].left != -1) Preorder(A,A[i].left);
  if(A[i].right != -1) Preorder(A,A[i].right);
}      
void Inorder(node_list *A,int i){
  if(A[i].left != -1) Inorder(A,A[i].left);
  printf(" %d",i);
  if(A[i].right != -1) Inorder(A,A[i].right);
}
void Postorder(node_list *A,int i){
  if(A[i].left != -1) Postorder(A,A[i].left);
  if(A[i].right != -1) Postorder(A,A[i].right);
  printf(" %d",i);
}
  
      

