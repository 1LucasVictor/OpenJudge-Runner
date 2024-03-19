#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
  struct node *migi;
  struct node *hidari;
  struct node *oya;
  int kagi;
};
typedef struct node * Node;
int max;

Node root,NIL;

void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;
  int H;
  
  z = malloc(sizeof(struct node));
  z->kagi = k;
  z->hidari = NIL;
  z->migi = NIL;
  while(x != NIL){
    y = x;
    if(z->kagi < x->kagi){
      x = x->hidari;
    }
    else{
      x = x->migi;
    }
  }
  z->oya = y;
  if( y == NIL){
    root = z;
  }
  else{
    if(z->kagi < y->kagi){
      y->hidari = z;
    }
    else{
      y->migi = z;
    }
  }
}

void inorder( Node u){
  if( u == NIL) return;
  inorder(u->hidari);
  printf(" %d",u->kagi);
  inorder(u->migi);
}
void preorder( Node u){
  if(u == NIL)return;
  printf(" %d",u->kagi);
  preorder(u->hidari);
  preorder(u->migi);
}

int main(){
  int n, i, a;
  char A[20];
  scanf("%d", &n);
  max = 0;
  for(i = 0; i < n; i++){
    scanf("%s",A);
    if( strcmp(A, "insert") == 0){
      scanf("%d",&a);
      insert(a);
    }
    else if( strcmp(A, "print") == 0){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}

