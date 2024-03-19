#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Node{
  int num;
  struct _Node *parent;
  struct _Node *left;
  struct _Node *right;
}Node;

void print_in_turn(Node *tree){
  if(tree != NULL){
    print_in_turn(tree->left);
    printf(" %d", tree->num);
    print_in_turn(tree->right);
  }
}

void print_on_node(Node *tree){
  if(tree != NULL){
    printf(" %d", tree->num);
    print_on_node(tree->left);
    if(tree->parent != NULL && tree->parent->right != tree){
      if(tree->right != NULL && tree->left != NULL)
	print_on_node(tree->right);
    }
    else
      print_on_node(tree->right);
  }
}

int main(){
  Node *root = NULL;
  Node *tmp, *new;
  Node *node; 
  char o[6];
  int n,x,i;
  int *num;

  scanf("%d", &n);
  num = (int *)malloc(sizeof(int)*n);
  for(i=0; i<n; i++){
    new = NULL;
    scanf("%s", &o);
    /*insert*/
    if(strcmp(o,"insert")==0){
      scanf("%d", &x);
      if(root == NULL){//first insert
	root = (Node *)malloc(sizeof(Node));
	root->parent = NULL;
	root->right  = NULL;
	root->left   = NULL;
	root->num    = x;
      }
      else{//other insert
	tmp = root;
	while(1){
	  if(tmp->num < x){
	    if(tmp->right != NULL)
	      tmp = tmp->right;
	    else{
	      new = (Node *)malloc(sizeof(Node));
	      tmp->right = new;
	    }
	  }
	  else{
	    if(tmp->left != NULL)
	      tmp = tmp->left;
	    else{
	      new = (Node *)malloc(sizeof(Node));
	      tmp->left = new;
	    }
	  }
	  if(new != NULL){
	    new->num = x;
	    new->parent= tmp;
	    new->right = NULL;
	    new->left  = NULL;
	    break;
	  }
	}
      }
    }
    /*print*/
    else{
      print_in_turn(root); putchar('\n');
      print_on_node(root); putchar('\n');
    }
  }
  return 0;
}