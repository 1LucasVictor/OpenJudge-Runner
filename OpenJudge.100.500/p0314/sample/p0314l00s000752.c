#include <stdio.h>
#define NIL -1
typedef struct{
  int p;
  int l;
  int r;

}data;

void pre();
void in();
void post();
data A[25];
int main(){
  int n,i,id,left,right,root;
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    A[i].p=NIL;
    
  }

  
  for(i=0;i<n;i++){
    scanf("%d%d%d",&id,&left,&right);
    A[id].l=left;
    A[id].r=right;
    if(left!=NIL)A[left].p=id;
    if(right!=NIL)A[right].p=id;
	       
  }
 for(i=0;i<n;i++){
      if(A[i].p==NIL) root=i;
	}


 printf("Preorder\n");
 pre(root);
 printf("\n");
 printf("Inorder\n");
 in(root);
 printf("\n");
 printf("Postorder\n");
 post(root);
 printf("\n");
 return 0;
}

void pre(int root){
  if(root==NIL) return;
  printf(" %d",root);
  pre(A[root].l);
  pre(A[root].r);
  
}
void in(int root){
  if(root==NIL) return;
  in(A[root].l);
  printf(" %d",root);
  in(A[root].r);
  
}
void post(int root){
  if(root==NIL) return;
  post(A[root].l);
  post(A[root].r);
  printf(" %d",root);
}