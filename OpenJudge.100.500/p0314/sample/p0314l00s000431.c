#include <stdio.h>

typedef struct{
  int id;
  int left;
  int right;
  int parent;
} leaf;

leaf T[25];

void Inorder(int);
void Preorder(int);
void Postorder(int);


int main(){

  int num,i,j;
  int k,v;
  scanf("%d",&num);
 //?????????                                                                                                                                    
  for(i=0;i<num;i++) T[i].parent = -1;


  for(i=0;i<num;i++){
    scanf("%d",&v);
    T[v].id = v;
    scanf("%d%d",&T[v].left,&T[v].right);
    T[T[v].left].parent = T[v].id;
    T[T[v].right].parent = T[v].id;
  }

 //??????                                                                                                                                      
  for(i=0;T[i].parent != -1;i++);
  puts("Preorder");
  Preorder(i);
  puts("");
  puts("Inorder");
  Inorder(i);
  puts("");
  puts("Postorder");
  Postorder(i);
  puts("");
  return 0;
}

void Preorder(int x){
  printf(" %d",T[x].id);
  if(T[x].left != -1) Preorder(T[x].left);
  if(T[x].right != -1) Preorder(T[x].right);
}
void Inorder(int x){
  if(T[x].left != -1) Inorder(T[x].left);
  printf(" %d",T[x].id);
  if(T[x].right != -1) Inorder(T[x].right);
}
void Postorder(int x){
  if(T[x].left != -1) Postorder(T[x].left);
  if(T[x].right != -1) Postorder(T[x].right);
  printf(" %d",T[x].id);
}