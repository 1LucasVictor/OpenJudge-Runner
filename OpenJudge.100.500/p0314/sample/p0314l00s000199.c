#include<stdio.h>
#include <stdlib.h>
#define NIL -1

typedef struct{
  int id,depth,type,degree,height; //type:0,root,1,internal node, 2,leaf
  int parent;
  int left,right;
}treenode;
treenode a[25];
int H[25];
int findsiblings(int id){
  if(a[id].parent == NIL) return NIL;
  if(a[a[id].parent].left != id && a[a[id].parent].left != NIL)  return a[a[id].parent].left;
  if(a[a[id].parent].right != id && a[a[id].parent].right != NIL)  return a[a[id].parent].right;
  return NIL;
}
int ansdepth(int id){
  int cnt = 0;
  while(a[id].parent != NIL){
    cnt++;
    id = a[a[id].parent].id;
  }
  return cnt;
}
int ansheight(int id){
  int h1=0,h2=0;

  if(a[id].left!=NIL)
    h1=ansheight(a[id].left)+1;
  if(a[id].right!=NIL)
    h2=ansheight(a[id].right)+1;

  return H[id]=( h1>h2 ? h1 : h2 );
}
void preParse(int u){
  if(u == NIL) return;
  printf(" %d",u);
  preParse(a[u].left);
  preParse(a[u].right);
}

void inParse(int u){
  if(u == NIL) return;
  inParse(a[u].left);
  printf(" %d",u);
  inParse(a[u].right);
}

void postParse(int u){
  if(u == NIL) return;
  postParse(a[u].left);
  postParse(a[u].right);
  printf(" %d",u);
}
int main(){
  int n,d,i,j,k,id,l,r,root;
  int cnt = 1;
  scanf("%d",&n);
  for(i =0;i <n; i++) a[i].parent = NIL;
  for(i =0;i < n;i++){
    scanf("%d",&id);
    a[id].left = a[id].right;
    a[id].id = id;
    a[id].depth = 0;
    scanf("%d%d",&l,&r);
    a[id].left = l;
    a[id].right = r;
    if(l != NIL) a[l].parent = id;
    if(r != NIL) a[r].parent = id;
  }
  for(i =0;i < n;i++)  if(a[i].parent == NIL)  root = i;
  printf("Preorder\n");
  preParse(root);
  printf("\nInorder\n");
  inParse(root);
  printf("\nPostorder\n");
  postParse(root);
  printf("\n");
  return 0;
}

