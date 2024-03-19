#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node{

  int key;
  struct Node *left;
  struct Node *right;
  struct Node *parent;

};
struct Node *root,*NIL;

void insert(int );
void inorder(struct Node *);
void preorder(struct Node *);

int main(){

  int i,sumnode,inputdata;
  char cinsert[100];  

  scanf("%d",&sumnode);

  for(i = 0; i < sumnode; i++){

  scanf("%s",&cinsert);

  if((strcmp(cinsert,"insert")) == 0){

    
    scanf("%d",&inputdata);

      insert(inputdata);

  }

  else if((strcmp(cinsert,"print")== 0 )){

	inorder(root);
	printf("\n");
	preorder(root);
	printf("\n");

      }


  }

  return 0;
}

void insert(int k){

  struct Node *x = root,*y = NIL, *z;

  

  z = (struct Node *)malloc(sizeof(struct Node));

  z->key = k;
  z->right = NIL;
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

    root = z;
  }

  else{

    if(z->key < y->key){

      y->left = z;

    }

    else{

      y->right = z;

    }

  }

}


void inorder(struct Node *u){

  if(u == NIL){

    return ;

  }

  inorder(u->left);

  printf(" %d",u->key);

  inorder(u->right);

}


void preorder(struct Node *u){

  if(u == NIL){

    return;

  }

  printf(" %d",u->key);

  preorder(u->left);
  preorder(u->right);

}