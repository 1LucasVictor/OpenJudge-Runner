#include<stdio.h>
#include<string.h>

#define rep(i, n) REP(i, 0, n)
#define REP(i, a, n) for(int i = a ; i < (int)n ; i++)
#define MAX 30

typedef struct{
  int parent;
  int left;
  int right;
}Roll;

int PreorderPrint(int root,Roll *Tree){
    if(root == -1) return -1;
    printf(" %d",root);
    PreorderPrint(Tree[root].left,Tree);
    PreorderPrint(Tree[root].right,Tree);
    return 0;
}

int InorderPrint(int root,Roll *Tree){
  if(root==-1)return -1;
  InorderPrint(Tree[root].left,Tree);
  printf(" %d",root);
  InorderPrint(Tree[root].right,Tree);
  return 0;
}

int PostorderPrint(int root,Roll *Tree){
  if(root==-1)return -1;
  PostorderPrint(Tree[root].left,Tree);
  PostorderPrint(Tree[root].right,Tree);
  printf(" %d",root);
  return 0;
}

void init(Roll *Tree){
  rep(i,MAX){
    Tree[i].left=Tree[i].right=Tree[i].parent=-1;
  }
}

int main(){
  Roll Tree[MAX];
  int id,left,right;
  int n,root=0;
  scanf("%d",&n);
  init(Tree);
  rep(i,n){
     scanf("%d%d%d",&id,&left,&right);
     Tree[id].left=left;
     Tree[id].right=right;
     if(left!=-1) Tree[left].parent=id;
     if(right!=-1) Tree[right].parent=id;
   }
  rep(i,n){
    if(Tree[i].parent==-1){
      root=i;
      break;
    }
  }
  printf("Preorder\n"); 
  PreorderPrint(root,Tree);
  printf("\n");
  printf("Inorder\n"); 
  InorderPrint(root,Tree);
  printf("\n");
  printf("Postorder\n"); 
  PostorderPrint(root,Tree);
  printf("\n");
  return 0;
}