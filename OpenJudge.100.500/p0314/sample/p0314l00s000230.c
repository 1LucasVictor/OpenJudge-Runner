#include<stdio.h>
#define NIL -1
typedef struct{
  int p,l,r;
}node;

void preParse(node *u,int n){
  if(n == NIL) return;
  printf(" %d",n);
  preParse(u,u[n].l);
  preParse(u,u[n].r);
}

void inParse(node *u,int n){
  if(n == NIL) return;
  inParse(u,u[n].l);
  printf(" %d",n);
  inParse(u,u[n].r);
}

void postParse(node *u,int n){
  if(n == NIL) return;
  postParse(u,u[n].l);
  postParse(u,u[n].r);
  printf(" %d",n);
}

int main(){
  node u[30];
  int n,id,l,r;
  int i;
  
  scanf("%d",&n);
  for(i=0;i<n;i++) u[i].p = u[i].l = u[i].r = NIL;
  for(i=0;i<n;i++){
    scanf("%d%d%d",&id,&l,&r);
    u[id].l = l;
    u[id].r = r;
    u[l].p = u[r].p = id;
  }
  id = 0;
  while(u[id].p != NIL) id = u[id].p;
  printf("Preorder\n");
  preParse(u,id);
  printf("\n");
  printf("Inorder\n");
  inParse(u,id);
  printf("\n");
  printf("Postorder\n");
  postParse(u,id);
  printf("\n");
  
return 0;
}

