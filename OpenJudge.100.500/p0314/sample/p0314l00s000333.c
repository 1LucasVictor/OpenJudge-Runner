#include<stdio.h>
#define MAX 10000
#define NIL -1

struct Node{
  int p,left,right;
};
struct Node t[MAX];
int n;

void preParse(int u){
  if(u == NIL) return;
  printf(" %d",u);
  preParse(t[u].left);
  preParse(t[u].right);
}
void inParse(int u){
  if(u == NIL) return;
  inParse(t[u].left);
  printf(" %d",u);
  inParse(t[u].right);
}
void postParse(int u){
  if(u == NIL) return;
  postParse(t[u].left);
  postParse(t[u].right);
  printf(" %d",u);
}
int main(){
  int i,v,l,r,root;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    t[i].p=NIL;
  }
  for(i=0;i<n;i++){
    scanf("%d %d %d",&v,&l,&r);
    t[v].left=l;
    t[v].right=r;
    if(l!=NIL)t[l].p=v;
    if(r!=NIL)t[r].p=v;
  }
  for(i=0;i<n;i++){
    if(t[i].p==NIL)root=i;
  }
  printf("Preorder\n");
  preParse(root);
  printf("\n"); 
  printf("Inorder\n");
  inParse(root);
  printf("\n");
  printf("Postorder\n");
  postParse(root);
  printf("\n");
}