#include<stdio.h>
#define N 25
 
typedef struct{
  int parent;
  int left;
  int right;
}node;
 
node C[N];
 
void PreOrder(int);
void InOrder(int);
void PostOrder(int);
 
int main(){
  int n,id,i;
 
  scanf("%d",&n);
 
  for(i=0;i<n;i++){
    C[i].parent = -1;
  } 
  
  for(i=0;i<n;i++){
    
    scanf("%d",&id);
    scanf("%d %d", &C[id].left, &C[id].right);
    
    if(C[id].left != -1) C[C[id].left].parent = id;
    
    if(C[id].right != -1) C[C[id].right].parent = id;
    
  }
 
  for(i=0; i<n; i++){
 
    if(C[i].parent == -1){
 
 
      printf("Preorder\n");
      PreOrder(i);
 
      printf("\nInorder\n");
      InOrder(i);
 
      printf("\nPostorder\n");
      PostOrder(i);
 
      printf("\n");
      break;
 
    }
  }
 
  return 0;
}
 
 
void PreOrder(int n){
  printf(" %d",n);
 
  if(C[n].left != -1) PreOrder(C[n].left);
  if(C[n].right != -1) PreOrder(C[n].right);
 
}
 
void InOrder(int n){
  if(C[n].left != -1) InOrder(C[n].left);
 
  printf(" %d",n);
 
  if(C[n].right != -1) InOrder(C[n].right);
 
}
 
void PostOrder(int n){
 
  if(C[n].left != -1) PostOrder(C[n].left);
 
  if(C[n].right != -1) PostOrder(C[n].right);
 
  printf(" %d",n);
}