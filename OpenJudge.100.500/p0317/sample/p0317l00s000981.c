#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node{
  int key;
  struct Node *right;
  struct Node *left;
  struct Node *parent;
};

struct Node *root,*NIL;

void insert(int k);
void inorder(struct Node *n);
void preorder(struct Node *n);
struct Node *find(struct Node *n,int i);


int main(){

  int i,n,s;
  char code[10];
  struct Node *t;


  scanf("%d",&n);

  for(i = 0; i < n; i++){

    scanf("%s",code);

    if(strcmp(code,"find") == 0){
      scanf("%d",&s);

      t = find(root,s);

      if(t != NIL)printf("yes\n");
      else printf("no\n");
    }

    if(strcmp(code,"insert") == 0){
      scanf("%d",&s);
      insert(s);
    
    }

    else if(strcmp(code,"print") == 0){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
      
    }

 
  }

  return 0;
}
      
    
void insert(int k){
  struct Node *b=NIL, *a = root, *c;

  c = malloc(sizeof(struct Node));
  c->key = k;
  c->right = NIL;
  c->left = NIL;

  while(a != NIL){

    b = a;
    
    if(c->key < a->key) a = a->left;

    else a = a->right;
  }

  c->parent = b;

  if(b == NIL)root = c;

  else{
    if(c->key < b->key) b->left = c;
    
    else b->right = c;
  }
  
}


void inorder(struct Node *n){
  if(n == NIL)return;

  inorder(n->left);

  printf(" %d",n->key);

  inorder(n->right);
}


void preorder(struct Node *n){

  if(n == NIL)return;

  printf(" %d",n->key);

  preorder(n->left);
  preorder(n->right);

}

struct Node *find(struct Node *n,int s){

   while(n != NIL && s != n->key){

     if(s < n->key)n = n->left;
     else n = n->right;
   }

   return n;
 }

