
#include<stdio.h>

#include<stdlib.h>

 

struct node{

  struct node *p;

  struct node *r;

  struct node *l;

  int key;

};

 

 

typedef struct node * Node;

Node root;

 

void inorder(Node root)

{

 

  if(root != NULL){

    inorder(root->l);

    printf(" %d", root->key);

    inorder(root->r);

  }

}

 

void preorder(Node root)

{

if(root != NULL){

   printf(" %d", root->key);

   preorder(root->l);

   preorder(root->r);

 }

}

 

void insert(int k)

{

  Node y = NULL;

  Node x = root;

  Node z=malloc(sizeof(struct node));

  z->key = k;

  z->l = NULL;

  z->r = NULL;

  while(x!=NULL){

    y = x;

    if(z->key<x->key){

      x=x->l;

    }else{

      x=x->r;

    }

  }

  z->p=y;

  if(y == NULL){

    root=z;

  }else if(z->key<y->key) {

    y->l=z;

  }else{

    y->r=z;

  }

}

 

 

 

 

int main()

{

  int n,i,x;

  char option[100];

 

  scanf("%d",&n);

  for(i=0;i<n;i++){

    scanf("%s",option);

    if(option[0]=='i'){

      scanf("%d",&x);

      insert(x);

    }

    else if(option[0]=='p'){

      inorder(root);

      printf("\n");

      preorder(root);

      printf("\n");

    }

  }

  return 0;

}