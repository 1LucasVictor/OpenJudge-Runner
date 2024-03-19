#include <stdio.h>
//#include<stdlib.h> 
struct Node{
  int p;
  int l;
  int r;
};

struct Node N[25];
 
 
void preOrder(int u){
  if(u==-1) return;//not root
  printf(" %d",u);
  preOrder(N[u].l);
  preOrder(N[u].r);
}
 
void inOrder(int u){
  if(u==-1) return;
  inOrder(N[u].l);
  printf(" %d", u);
  inOrder(N[u].r);
}
 
void postOrder(int u){
  if(u==-1) return;
  postOrder(N[u].l);
  postOrder(N[u].r);
  printf(" %d",u);
}
 
int main(){
  int i, id, l, r, n, root;
  scanf("%d", &n);
  for(i=0; i<n; i++){
    N[i].p=-1;
  }
  for(i=0; i<n; i++){
    scanf("%d %d %d",&id, &l, &r);
    N[id].l=l;
    N[id].r=r;
    if(!(l==-1)) N[l].p=id;
    if(!(r==-1)) N[r].p=id;
  }
  for(i=0; i<n; i++){
    if(N[i].p==-1){
      root=i;
    }
  }
  printf("Preorder\n");
  preOrder(root);
  printf("\n");
  printf("Inorder\n");
  inOrder(root);
  printf("\n");
  printf("Postorder\n");
  postOrder(root);
  printf("\n");
   
  return 0;
}
    