#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NIL NULL

typedef struct node{
  int key;
  struct node *right,*left,*p;
} Node;

Node *root;

void insert(int);
void prep(Node *);
void inp(Node *);
int find(int);


int main(){
  char c[20];
  int n,i,j,x;
  

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%s",c);
    

    if(c[0] == 'i'){
      scanf("%d",&x);
      insert(x);
    }
   
    else if(c[0] == 'p'){
      inp(root);
      printf("\n");
      prep(root);
      printf("\n");
    }

    else if(c[0] == 'f'){
      scanf("%d",&x);
      if( find(x))printf("yes\n");
      else printf("no\n");
    }
  }

  return 0;
  
}

void insert(int k){
  Node *y = NIL;
  Node *x = root;
  Node *z;

  z = (Node *)malloc(sizeof(Node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL){
    y = x;

    if(z->key < x->key) x = x->left;

    else x = x->right;
  }

    z->p = y;

    if(y == NIL)root = z;

    else{
      
    if(z->key < y->key) y->left = z;

    else y->right = z;
  }

}

void prep(Node *p){
  if(p == NIL) return;
  printf(" %d",p->key);
  prep(p->left);
  prep(p->right);
}

void inp(Node *p){
  if(p == NIL) return;
  inp(p->left);
  printf(" %d",p->key);
  inp(p->right);
}

 int find(int k){
   Node *x = root;
   Node *y = NIL;

   while(x != NIL){
     y = x;
     if(y->key == k)return 1;

     if(k < x->key) x=x->left;

     else x = x->right;
   }

   return 0;
 }
