#include<stdio.h>
#include<stdlib.h>

struct node{
  int key;
  struct node *parent;
  struct node *left;
  struct node *right;
};

typedef struct node *Nodepointer;

Nodepointer r,NIL;

void insert(int);
void print(void);

void inorder(Nodepointer);
void preorder(Nodepointer);

int main(){
  int i,n,num;
  char c[7];

scanf("%d",&n);
 
for(i=0;i<n;i++){
  scanf("%s",c);
  
  if(c[0]=='i'){
    scanf("%d",&num);
    insert(num);
  }
  else print();
 }
  return 0;
}

void insert(int k){
  Nodepointer y=NIL;
  Nodepointer x=r;

  Nodepointer z = (Nodepointer)malloc(sizeof(struct node));

  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL){
    y = x;
    if(z->key < x->key){
      x = x->left;
    }
    else{
      x = x->right;
    }
  }

  z->parent = y;

  if(y == NIL){
    r = z;
  }

  else if(z->key < y->key){
    y->left = z;
  }

  else{
    y->right = z;
  }

}

void print(void){
    inorder(r);
    printf("\n");
    preorder(r);
    printf("\n");
}

void inorder(Nodepointer a){
  if(a==NIL)return;
  inorder(a->left);
  printf(" %d",a->key);
  inorder(a->right);
}
void preorder(Nodepointer a){
  if(a == NIL){
    return;
  }
  printf(" %d",a->key);
  preorder(a->left);
  preorder(a->right);
}

