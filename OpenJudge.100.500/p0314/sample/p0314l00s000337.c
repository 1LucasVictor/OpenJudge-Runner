#include<stdio.h>
#define N 25
typedef struct{
  int left;
  int right;
  int parent;
}Tree;
Tree n[N];
void preParse(int u){
  printf(" %d",u);
  if(n[u].left!=-1) {preParse(n[u].left);}
  if(n[u].right!=-1)   {preParse(n[u].right);}
}
 
void inParse(int u){
 
  if(n[u].left!=-1)  {inParse(n[u].left);}
  printf(" %d",u);
  if(n[u].right!=-1) {inParse(n[u].right);}
}
 
void postParse(int u){
  if(n[u].left!=-1) {postParse(n[u].left);}
  if(n[u].right!=-1)  {postParse(n[u].right);}
  printf(" %d",u);
}
 
int main(){
  int i,a,id;
  scanf("%d",&a);
  for(i=0;i<a;i++) {n[i].left=n[i].right=n[i].parent=-1;}
 
  for(i=0;i<a;i++){
    scanf("%d",&id);
    scanf("%d",&n[id].left);
    scanf("%d",&n[id].right);
    
    n[n[id].right].parent=id;
    n[n[id].left].parent=id;
  }
   
 
  printf("Preorder\n");
 
  for(i=0;i<a;i++){
 
    if(n[i].parent==-1) {preParse(i);}
 
  }
 
  printf("\n");
 
  printf("Inorder\n");
 
  for(i=0;i<a;i++){
 
    if(n[i].parent==-1) {inParse(i);}
 
  }
 
  printf("\n");
 
 
  printf("Postorder\n");
 
  for(i=0;i<a;i++){
 
    if(n[i].parent==-1) {postParse(i);}
 
  }
 
  printf("\n");
 
  return 0;
}