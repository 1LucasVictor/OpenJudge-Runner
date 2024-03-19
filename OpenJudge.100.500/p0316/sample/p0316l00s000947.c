#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define NIL NULL

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};

typedef struct node * Node;


Node root;

Node mini(Node x){
  if(x->left==NIL){
    return x;
  }
  return mini(x->left);
}

Node max(Node x){
  if(x->right==NIL){
    return x;
  }
  return max(x->right);
}


Node search(Node u, int k){
  if(u->key==k){
    return u;
  }
  else if(u->key>k){
    return search(u->right, k);
  }
  else{
    return search(u->left, k);
  }
}


Node successor(Node x){
  Node ans;
  if(x->right==NIL){
    ans=x->parent;
    while(1){
      if(ans->parent==NIL || ans->parent<ans){
	break;
      }
      ans=x->parent;
    }
  }

  else {
    ans=x->right;
    while(1){
      if(ans->left==NIL){
	break;
      }
      ans=ans->left;
    }
  }
  return ans;
}
void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
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

void inorder(Node u){
  if(u == NIL){
    return;
  }
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}
void preorder(Node u){
  if(u == NIL){
    return;
  }
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}




int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'f' ){
      scanf("%d", &x);
      Node t = search(root, x);
      if ( t != NIL ){
	printf("yes\n");
      }
      else{
	printf("no\n");
      }
    }
    else if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    }
    else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}

