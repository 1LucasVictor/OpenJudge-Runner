#include<stdio.h>
#include<stdlib.h>
#define NIL NULL

struct node{
  struct node *right;
  struct node *left;
  struct node *oya;
  int key;
};

typedef struct node *Node;

Node root;

Node min(Node a){
  while(a -> left != NULL){
    a = a -> left;
  }
  return a;
}

Node search(Node i, int k){
  if(i -> key > k){
    if(i -> left == NULL){
      return NIL;
    }
    return search(i -> right, k);
  }
  return i;
}

Node successor(Node x){
  Node y;
  if(x -> right != NIL){
    return min(x -> right);
  }
  y = x -> oya;
  while( y != NIL && x == y -> right){
    x = y;
    y = y -> oya;
    return y;
  }
}

void delete(Node d){
  Node x, y;
  if(d != NIL){
    if(d -> left == NIL || d -> right == NIL){
      y = d;
      if(d -> left != NIL){
	x = y -> right;
      }else{
	x = y -> right;
      }
    }else if( x != NIL){
      x -> oya = y -> oya;
      if (y -> oya == NIL){
	root = x;
      } else if(y = y -> oya -> left){
	y -> oya -> left = x;
      } else {
	y -> oya -> right = x;
      }
      
    }
  }
  
  if(y != d){
    d -> key = y -> key;
    d -> oya = y -> oya;
    d -> left = y -> left;
    d -> right = y -> right;
  }
}

void insert(int k){
  Node x = root;
  Node y = NIL;
  Node z;
  
  z = malloc(sizeof(struct node));
  z -> key = k;
  z -> left = NIL;
  z -> right = NIL;
  
  while(x != NIL){
    y = x;
    if(z -> key < x -> key){
      x = x -> left;
    } else {
      x = x -> right;
    }
  }
  z -> oya = y;
  if(y == NIL){
    root = z;
  } else if (z -> key < y-> key){
    y -> left = z;
  } else {
    y -> right = z;
  }
}

void inorder(Node n){
  if(n != NIL){
    inorder(n -> left);
    printf(" %d", n -> key);
    inorder(n -> right);
  }
}

void preorder(Node n){
  
  if(n != NIL){
    printf(" %d", n -> key);
    preorder(n -> left);
    preorder(n -> right);
  }
}

int main(){
  int i, n, x;
  char p[20];
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%s", p);
    if(p[0] == 'f'){
      scanf("%d", &x);
      Node s = search(root, x);
      if(s != NIL)
	printf("yes\n");
      else
	printf("no\n");
    } else if(p[0] == 'i'){
      scanf("%d", &x);
      insert(x);
    }else if(p[0] == 'p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } else if(p[0] == 'd'){
      scanf("d", &x);
      delete(search(root, x));
    }
  }
  
  return 0;
}