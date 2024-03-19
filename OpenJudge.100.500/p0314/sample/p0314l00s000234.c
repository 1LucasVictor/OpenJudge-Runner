#include <stdio.h>

#define N 100000

typedef struct{
  int p;
  int l;
  int r;
}Node;

void preorder(Node*,int);
void inorder(Node*,int);
void postorder(Node*,int);

int main(){

   int i;
   int n;
   int id;
  Node T[N];

  scanf("%d",&n);

  for(i=0;i<n;i++){
    T[i].p = -1;
    T[i].l = -1;
    T[i].r = -1;
  }

   for(i=0;i<n;i++){
    scanf("%d",&id);
    scanf("%d%d",&T[id].l,&T[id].r);
    T[T[id].l].p = id;
    T[T[id].r].p = id;
   }

  for(i=0;i<n;i++){
    if(T[i].p==-1){
      break;
    }
  }

    printf("Preorder\n");
    preorder(T ,i);
    printf("\n");
    printf("Inorder\n");
    inorder(T ,i);
    printf("\n");
    printf("Postorder\n");
    postorder(T ,i);
    printf("\n");

  return 0;
}


void preorder(Node *T ,int i){
  if(i == -1) return;
  printf(" %d",i);
  preorder(T ,T[i].l);
  preorder(T ,T[i].r);
}

void inorder(Node *T ,int i){
  if(i == -1) return;
  inorder(T ,T[i].l);
  printf(" %d",i);
  inorder(T ,T[i].r);
}

void postorder(Node *T ,int i){
  if(i == -1) return;
  postorder(T ,T[i].l);
  postorder(T ,T[i].r);
  printf(" %d",i);
}