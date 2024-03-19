#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;
#define NIL NULL

Node root;

void print_i(Node x){
        if(x == NIL)return;
        print_i(x->left);
        printf(" %d", x->key);
        print_i(x->right);
}

void print_p(Node x){
        if(x == NIL)return;
        printf(" %d", x->key);
        print_p(x->left);
        print_p(x->right);      
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
          }else{
                x = x->right;
          }
  }

  z->parent = y;

  if(y == NIL)
          root = z;
  else if(z->key < y->key)
          y->left = z;
  else
          y->right = z;
}

int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);

        for(i = 0 ; i < n ;i++){
                scanf("%s", com);
                if(strcmp(com, "insert") == 0){
                        scanf("%d", &x);
                        insert(x);      
                }else{
                        print_i(root);
                        printf("\n");
                        print_p(root);
                        printf("\n");
                }
        }

  return 0;
}
