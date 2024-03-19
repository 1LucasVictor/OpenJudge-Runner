#include<stdio.h>
 
#define MAX 26
 
typedef struct{
  int p;
  int l;
  int r;
} Tree;
 
Tree T[MAX];
 
void preorder(int a){
  if(a==-1) return;
 
  printf(" %d",a);
  preorder(T[a].l);
  preorder(T[a].r);
}
 
void inorder(int a){
  if(a==-1) return;
 
  inorder(T[a].l);
  printf(" %d",a);
  inorder(T[a].r);
}
 
void postorder(int a){
  if(a==-1) return;
 
  postorder(T[a].l);
  postorder(T[a].r);
  printf(" %d",a);
}
 
int main(){
  int n,i,id,left,right;
 
  scanf("%d",&n);
 
  for(i=0;i<n;i++){
    T[i].p=-1;
    T[i].l=-1;
    T[i].r=-1;
  }
 
  for(i=0;i<n;i++){
    scanf("%d%d%d",&id,&left,&right);
    T[id].l=left;
    T[id].r=right;
    if(left!=-1) T[left].p=id;
    if(right!=-1) T[right].p=id;
  }
 
  for(i=0;i<n;i++){
    if(T[i].p==-1){
      printf("Preorder\n");
      preorder(i);
      printf("\nInorder\n");
      inorder(i);
      printf("\nPostorder\n");
      postorder(i);
    }
  }
  printf("\n");
 
  return 0;
}

