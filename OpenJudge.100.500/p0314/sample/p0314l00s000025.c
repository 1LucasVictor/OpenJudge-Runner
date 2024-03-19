#include<stdio.h>
#define MAX 100000
typedef struct{
  int p,l,r;
}Node;

Node N[MAX];
int root;

void Preorder(int i){
  if(i==-1)return;
  printf(" %d",i);
  Preorder(N[i].l);
  Preorder(N[i].r);
}

void  Inorder(int i){
  if(i==-1)return;
  Inorder(N[i].l);
  printf(" %d",i);
  Inorder(N[i].r); 
}
 
void  Postorder(int i){
  if(i==-1)return;
  Postorder(N[i].l);
  Postorder(N[i].r);
  printf(" %d",i);
} 

int main(){
  int n;
  int i;
  int id;
 
  scanf("%d",&n);

  for(i=0;i<100000;i++){
    N[i].p = N[i].l = N[i].r = -1;
  }

  for(i=0;i<n;i++){//input
    scanf("%d",&id);
    scanf("%d",&N[id].l);
    scanf("%d",&N[id].r);
      
    if(N[id].l!=-1) N[N[id].l].p = id;
    if(N[id].r!=-1) N[N[id].r].p = id;
  }
 
  for(root=id;N[root].p!=-1;root=N[root].p){;}//あるものの、親をどんどん辿って、ルートのid発見

  printf("Preorder\n");//PRINT
  Preorder(root);printf("\n");
  printf("Inorder\n");
  Inorder(root);printf("\n");
  printf("Postorder\n");
  Postorder(root);printf("\n");

  return 0;
}

