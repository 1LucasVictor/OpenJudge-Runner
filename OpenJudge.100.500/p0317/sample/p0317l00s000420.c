#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node{
  int key;
  struct Node *right,*left,*parent;
};

typedef struct Node node;

node *NIL;
node *root;

void insert(int k);
void inorder(node *p);
void preorder(node *p);
node * find(node *p,int k);



int main(void)
{
  int m,k;
  int i;
  char com[100];

  scanf("%d",&m);

  for(i = 0;i < m;i++){
    scanf("%s",com);

    if(com[0] == 'f'){
      scanf("%d",&k);
      node *n = find(root,k);
      if(n == NIL){
	puts("no");
      } else {
	puts("yes");
      }
      
    } else if(strcmp(com,"insert") == 0){
      scanf("%d",&k);
      insert(k);
      
    } else if(strcmp(com,"print") == 0){
      inorder(root);
      puts("");
      preorder(root);
      puts("");
    }
  }
  return 0;
}



node * find(node *p,int k){
  while(p != NIL && k != p->key){
    p = (p->key  >  k) ? p->left : p->right;
  }

  return p;
}





void insert(int k){
  node *x = root;
  node *y = NIL;
  node *z;

  z = (node *)malloc(sizeof(node));
  
  z->left = NIL;
  z->right = NIL;
  z->key = k;

  while(x != NIL){
    y = x;
    
    if(z->key  <   x->key){
      x = x->left;
    } else {
      x = x->right;
    }
  }

  z->parent = y;

  if(y == NIL){
    root = z;
  }
  if (y != NIL){
    if(y->key  >  z->key){
      y->left = z;
    } else {
      y->right = z;
    }
  }
  
}


void inorder(node *p){
  if(p != NIL){
    inorder(p->left);
    printf(" %d",p->key);
    inorder(p->right);
  } else {
    return;
  }
}


void preorder(node *p){
  if(p != NIL){
    printf(" %d",p->key);
    preorder(p->left);
    preorder(p->right);
  } else {
    return;
  }
}


   


