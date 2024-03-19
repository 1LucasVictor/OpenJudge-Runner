#include<stdio.h>

#define NIL -1

void Preorder(int);
void Inorder(int);
void Postorder(int);

struct Node{
  int parent;
  int left;
  int right;
};

struct Node T[25];

int main(){

  int n,left,right,id,i,c;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    T[i].parent=NIL;
    T[i].right=NIL;
    T[i].left=NIL;   
  }
  
  
  for(i=0;i<n;i++){

    scanf("%d%d%d",&id,&left,&right);

    T[right].parent=id;
    T[left].parent=id;
    T[id].left=left;
    T[id].right=right;
    
  }

  for(i=0;i<n;i++){
    
    if(T[i].parent==NIL){
      c=i;
      break;
    }

  }

  printf("Preorder\n");
  
  Preorder(c);

  printf("\n");

  printf("Inorder\n");
  
  Inorder(c);

  printf("\n");

  printf("Postorder\n");

  Postorder(c);

  printf("\n");

  return 0;

}

void Preorder(int u){

  if(u==NIL) return ;

  printf(" %d",u);

  Preorder(T[u].left);
  Preorder(T[u].right);

}

void Inorder(int u){

  if(u==NIL) return ;

  Inorder(T[u].left);

  printf(" %d",u);

  Inorder(T[u].right);

}

void Postorder(int u){

  if(u==NIL) return ;

  Postorder(T[u].left);
  Postorder(T[u].right);

  printf(" %d",u);
  
}

  
  