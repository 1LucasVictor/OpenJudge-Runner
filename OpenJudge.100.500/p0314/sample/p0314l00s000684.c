#include <stdio.h>
#include <string.h>
#define N 100000
int height(int);
struct Node{
  int parent;
  int left;
  int right;
};
struct Node T[N];
int H[N];
int main(){
  
  int n,i,id,r,l;
  
  scanf("%d",&n);
  
  

  for(i=0;i<n;i++){
    T[i].right=T[i].left=T[i].parent=-1;
  }
  
  for(i=0;i<n;i++){
    scanf("%d",&id);
    scanf("%d%d",&l,&r);
    T[id].left=l;
    T[l].parent=id;
    T[id].right=r;
    T[r].parent=id;
    
  }
  printf("Preorder\n");
  for(i=0;i<n;i++){
    if(T[i].parent==-1)
      preorder(i);
  }
  printf("\n");
 printf("Inorder\n");
  for(i=0;i<n;i++){
    if(T[i].parent==-1)
      inorder(i);
  }
  printf("\n");
  printf("Postorder\n");
  for(i=0;i<n;i++){
    if(T[i].parent==-1)
      postorder(i);
  }
  printf("\n");
  
  
  return 0;
}


int preorder(int x){
  if(x!=-1){
    printf(" %d",x);
    preorder(T[x].left);
    preorder(T[x].right);
  }
}

int inorder(int x){
  if(x!=-1){
    inorder(T[x].left);
    printf(" %d",x);
    inorder(T[x].right);
  }
}

int postorder(int x){
  if(x!=-1){
    postorder(T[x].left);
    postorder(T[x].right);
    printf(" %d",x);
  }
}