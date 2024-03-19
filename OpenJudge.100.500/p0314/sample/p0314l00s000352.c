#include<stdio.h>
#include<string.h>
#define MAX 30

typedef struct{
  int p,l,r;
}Roll;

int PreorderPrint(int,Roll *);
int InorderPrint(int,Roll *);
int PostorderPrint(int,Roll *);
void init(Roll *);

int PreorderPrint(int root,Roll *Tree){
    if(root == -1) return -1;
    printf(" %d",root);
    PreorderPrint(Tree[root].l,Tree);
    PreorderPrint(Tree[root].r,Tree);
    return 0;
}
 
int InorderPrint(int root,Roll *Tree){
  if(root==-1)return -1;
  InorderPrint(Tree[root].l,Tree);
  printf(" %d",root);
  InorderPrint(Tree[root].r,Tree);
  return 0;
}
 
int PostorderPrint(int root,Roll *Tree){
  if(root==-1)return -1;
  PostorderPrint(Tree[root].l,Tree);
  PostorderPrint(Tree[root].r,Tree);
  printf(" %d",root);
  return 0;
}
 
void init(Roll *Tree){
  int i;
  for(i=0;i<MAX;i++)Tree[i].l=Tree[i].r=Tree[i].p=-1;
  
}
 
int main(){
  Roll Tree[MAX];
  int id,l,r,i,n,root=0;

  scanf("%d",&n);
  init(Tree);
  for(i=0;i<n;i++){
     scanf("%d%d%d",&id,&l,&r);
     Tree[id].l=l;
     Tree[id].r=r;
     if(l!=-1) Tree[l].p=id;
     if(r!=-1) Tree[r].p=id;
   }
  for(i=0;i<n;i++){
    if(Tree[i].p==-1){
      root=i;
      break;
    }
  }
  printf("Preorder\n"); 
  PreorderPrint(root,Tree);

  printf("\nInorder\n"); 
  InorderPrint(root,Tree);

  printf("\nPostorder\n"); 
  PostorderPrint(root,Tree);
  printf("\n");
  return 0;
}
  