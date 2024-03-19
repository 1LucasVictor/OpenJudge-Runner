#include <stdio.h>
#include <stdlib.h>

int n, key;
struct node{
  struct node *left;
  struct node *right;
  struct node *parent;
  int key;
};

struct node *t;
struct node *root, *NIL;

void insert(struct node *, int key);
struct node* find(struct node *, int key);
void inorder(struct node *t);
void preorder(struct node *t);
	  
int main(){

  int i, j, k;
  char order[20];
  struct node *result;
  
  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%s", order);

    if(order[0]=='i'){
      scanf("%d", &key);
      insert(t, key);
     
    }//insert

    else if(order[0]=='f'){

      scanf("%d", &key);
      result=find(root, key);
      if(result != NIL) printf("yes\n");
      else printf("no\n");
      
    }
    
    else if(order[0]=='p'){
      
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }//print
  }
  return 0;
}

void insert(struct node *t, int key){

  struct node *y=NIL;
  struct node *x=root;
  struct node *z;

  z=(struct node*)malloc(sizeof(struct node));
  z->key=key;
  z->left=NIL;
  z->right=NIL;
  
  while(x!=NIL){//適した入れる場所見付けるまで繰り返す
    y=x;
    if(z->key < x->key){
      x=x->left;
    }
    else x=x->right;
  }
  z->parent=y;

  if(y==NIL){
    root = z;
  }
  else {
    if(z->key < y->key){
    y->left = z;
    }
    else y->right=z;
  }
}
struct node* find(struct node *x, int key){

  while(x!=NIL && x->key!=key){

    if(key< x->key) x=x->left;
    else x=x->right;
    
  }
  return x;  
}
void inorder(struct node *t){

  if(t==NIL) return;

  inorder(t->left);
  printf(" %d", t->key);
  inorder(t->right);
}
void preorder(struct node *t){

  if(t==NIL) return;
  printf(" %d", t->key);
  preorder(t->left);
  preorder(t->right);
}
  


