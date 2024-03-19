#include <stdio.h>
#define MAX 100000
#define NIL -1

typedef struct{
  int parent;
  int left;
  int right;
}Data;

Data T[MAX];

void Preorder(int id){
  if(id==NIL)return;

  printf(" %d",id);
  
  Preorder(T[id].left);
  Preorder(T[id].right);
};
void Inorder(int id){
  if(id==NIL)return;

  Inorder(T[id].left);
  printf(" %d",id);

  Inorder(T[id].right);
};
void Postorder(int id){
  if(id==NIL)return;

  Postorder(T[id].left);
  Postorder(T[id].right);

  printf(" %d",id);
};

int main(){
  int i,j,id,n,child,root;
  
  scanf("%d",&n);

  for(i=0;i<n;i++){ //?????????
    T[i].parent = T[i].left = T[i].right = NIL;
  }
  
  for(i=0;i<n;i++){ //parent
    scanf("%d",&id);
    for(j=0; j<2; j++){
      scanf("%d",&child);
      if(j==0){
	T[id].left = child;
      }
      else {
	T[id].right = child;
      }
      T[child].parent = id;
    }
  }

  for(i=0;i<n;i++){
    if(T[i].parent==NIL)root=i;
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