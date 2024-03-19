#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int x;
  int y;
  int z;
}Node;

void Pr(int);
void Ir(int);
void Or(int);

Node *node;

int main(void){

  int i,n,s,t;

  scanf("%d",&n);

  node=(Node*)malloc(n*sizeof(Node));

  for(i=0;i<=n-1;i++){
    node[i].x=-1;
    node[i].y=-1;
    node[i].z=-1;
  }
  for(i=0;i<=n-1;i++){
    scanf("%d",&s);
    scanf("%d",&node[s].y);
    if(node[s].y!=-1)
      node[node[s].y].x=s;
    scanf("%d",&node[s].z);
     if(node[s].z!=-1)
      node[node[s].z].x=s;
  }
  for(i=0;i<=n-1;i++){
    if(node[i].x==-1)
      t=i;
  }
  printf("Preorder\n");
  Pr(t);
  printf("\n");
  
  printf("Inorder\n");
  Ir(t);
  printf("\n");
  
  printf("Postorder\n");
  Or(t);
  printf("\n");
  
  free(node);

  return 0;
}


void Pr(int s){
  printf(" %d",s);
  if(node[s].y!=-1)
    Pr(node[s].y);
  if(node[s].z!=-1)
    Pr(node[s].z);
}

void Ir(int s){
  if(node[s].y!=-1)
    Ir(node[s].y);
  printf(" %d",s);
  if(node[s].z!=-1)
    Ir(node[s].z);
}

void Or(int s){
  if(node[s].y!=-1)
    Or(node[s].y);
  if(node[s].z!=-1)
    Or(node[s].z);
   printf(" %d",s);
}

