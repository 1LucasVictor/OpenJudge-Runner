#include<stdio.h>

typedef struct{
  int p;
  int l;
  int r;
}Node;

Node node[25];

void preorder(int p){
  if(p != -1){
    printf(" %d" ,p);
    preorder(node[p].l);
    preorder(node[p].r);
  }
}

void inorder(int p){
  if(p != -1){
    inorder(node[p].l);
    printf(" %d" ,p);
    inorder(node[p].r);
  }
}

void postorder(int p){
  if(p != -1){
    postorder(node[p].l);
    postorder(node[p].r);
    printf(" %d" ,p);
  }
}

int main(){
  int n,i,id;
  int p,l,r;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    node[i].p=node[i].l=node[i].r=-1;
  }

  for(i=0;i<n;i++){
    scanf("%d%d%d",&id,&l,&r);
    if(l!=-1){
      node[id].l=l;
      node[l].p=id;
    }
    if(r!=-1){
      node[id].r=r;
      node[r].p=id;
    }
  }

  for(i=0;i<n;i++){
    if(node[i].p==-1){
      p=i;
      break;
    }
  }

  printf("Preorder\n");
  preorder(p);
  printf("\nInorder\n");
  inorder(p);
  printf("\nPostorder\n");
  postorder(p);
  printf("\n");

  return 0;
}