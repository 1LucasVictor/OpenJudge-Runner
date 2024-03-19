#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct d {
  struct d *parent;
  struct d *left;
  struct d *right;
  int key;
} node;
typedef node * Node;

Node root;

void insert(int key){
  Node x = root;
  Node y = NULL;
  Node z;

  z = (Node)malloc(sizeof(node));
  z->key = key;
  z->left = NULL;
  z->right = NULL;

  while(x != NULL){
    y = x;
    if(z->key < x->key){
      x = x->left;
    }
    else{
      x = x->right;
    }
  }
  z->parent = y;

  if(y == NULL){
    root = z;
  }
  else if (z->key < y->key){
    y->left = z;
  }
  else{
    y->right = z;
  }
}

Node find(int key){
  Node x = root;

  while(1){
    if(x == NULL){
      // puts("no");
      return x;
    }
    else if(x->key == key){
      // puts("yes");
      return x;
    }
    else if(key < x->key){
      x = x->left;
    }
    else if(x->key < key){
      x = x->right;
    }
  }
}

void delete(int key){
  Node x = find(key);
  Node y;
  int temp;

  // 左側に子孫なし
  if(x->left == NULL){
    // 右側に子孫なし
    if(x->right == NULL){
      // 親の左側についているとき
      if(x->key < x->parent->key){
        x->parent->left = NULL;
      }
      // 親の右側についているとき
      else if(x->parent->key < x->key){
        x->parent->right = NULL;
      }
    }
    // 右側に子孫あり
    else if(x->right != NULL){
      // 親の左側についているとき
      if(x->key < x->parent->key){
        x->parent->left = x->right;
      }
      // 親の右側についているとき
      else if(x->parent->key < x->key){
        x->parent->right = x->right;
      }
      x->right->parent = x->parent;
    }
  }
  // 左側に子孫あり
  else if(x->left != NULL){
    // 右側に子孫なし
    if(x->right == NULL){
      // 親の左側についているとき
      if(x->key < x->parent->key){
        x->parent->left = x->left;
      }
      // 親の右側についているとき
      else if(x->parent->key < x->key){
        x->parent->right = x->left;
      }
      x->left->parent = x->parent;
    }
    // 右側に子孫あり
    else if(x->right != NULL){
      y = x->right;
      while(y->left != NULL){
        y = y->left;
      }
      temp = y->key;
      delete(temp);
      x->key = temp;
    }
  }
  free(x);
}

void inorderTreeWalk(Node x){
  if(x != NULL){
    inorderTreeWalk(x->left);
    printf(" %d",x->key);
    inorderTreeWalk(x->right);
  }
}

void preorderTreeWalk(Node x){
  if(x == NULL){
    return;
  }
  printf(" %d",x->key);
  preorderTreeWalk(x->left);
  preorderTreeWalk(x->right);
}

void printer(){
  inorderTreeWalk(root);
  printf("\n");
  preorderTreeWalk(root);
  printf("\n");
}

int main(){
  int i, n, key;
  char command[10];
  Node x;

  scanf("%d ",&n);
  for(i=0; i<n; i++){
    scanf("%s ",command);
    if(!strcmp(command, "insert")){
      scanf("%d ",&key);
      insert(key);
    }
    else if(!strcmp(command, "print")){
      printer();
    }
    else if(!strcmp(command, "find")){
      scanf("%d ",&key);
      x = find(key);
      if(x != NULL) puts("yes");
      else puts("no");
    }
    else if(!strcmp(command, "delete")){
      scanf("%d ",&key);
      delete(key);
    }
  }

  return 0;
}

