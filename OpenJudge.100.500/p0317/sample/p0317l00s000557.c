#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  struct node *left;
  struct node *right;
  struct node *parent;
  int key;
}node;

#define NIL NULL

node *ROOT;

void insert(int);
void inorder(node*);
void preorder(node*);
int find(node*,int);

int N;

int main(){
  int i,x,j,key;
  int a;
  char com[20];
  scanf("%d",&N);

  for ( i = 0; i < N; i++ ){
    scanf("%s", com);

    if(com[0] == 'f'){
      scanf("%d",&key);
      a = find(ROOT,key);
      if(a==NIL){
        printf("no\n");
      }
      else printf("yes\n");
      //else printf("no\n");
    }

    else  if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    }


    else if ( com[0] == 'p' ){
      inorder(ROOT);
      printf("\n");
      preorder(ROOT);
      printf("\n");
  }



}
  return 0;
}


void insert(int z){
  node* T;
  node* y;
  node* x;
  T = (node *)malloc(sizeof(node)*1);
  y = NIL;
  x = ROOT;
  T->key = z;
  T->left = NIL;
  T->right = NIL;
  //parent set
  while(x != NIL){
    y = x;
    if(T->key < x->key){
      x = x->left;
    }
    else{
      x = x->right;
    }
  }
  T->parent = y;

//insert!
  if(y == NIL){
    ROOT = T; // Tree is empty
  }
  else if(T->key < y->key){
    y->left = T;
  }

  else{
    y->right = T;
  }
}

void inorder(node* n){

  if(n != NIL){
    inorder(n->left);
      printf(" %d",n->key);
      inorder(n->right);
  }
}

void preorder(node* n){
  if(n != NIL){
    printf(" %d",n->key);
    preorder(n->left);
    preorder(n->right);
  }
}

int find(node* x,int key){
  if(x==NIL || key == x->key){
    return x;
  }
  if(key < x->key){
    return find(x->left,key);
  }
  else if(key > x->key){
    return find(x->right,key);
  }
}