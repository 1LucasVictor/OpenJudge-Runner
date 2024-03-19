#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
  int key;
  struct Node *right, *left, *parent;
};

struct Node *root, *NIL;

struct Node *find(struct Node *, int);
void insert(int);
void print_i(struct Node *);
void print_p(struct Node *);

int main(){
  int n, i, x, k;
  struct Node *t;
  char com[20];
  scanf("%d", &n);

        for(i = 0 ; i < n ;i++){
                scanf("%s", com);
                if(strcmp(com, "insert") == 0){
                        scanf("%d", &x);
                        insert(x);
                }else if(strcmp(com, "print") == 0){
                        print_i(root);
                        printf("\n");
                        print_p(root);
                        printf("\n");
                }else{
                  scanf("%d", &x);
                  t = find(root, x);
                  if(t != NIL)printf("yes\n");
                  else printf("no\n");
                }
        }

  return 0;
}

struct Node *find(struct Node *u, int k){
  while(u != NIL && k != u->key){
    if(k < u->key)u = u->left;
    else u = u->right;
  }
  return u;
}

void insert(int k){
  struct Node *y = NIL;
  struct Node *x = root;
  struct Node *z;

  z = malloc(sizeof(struct Node));
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

void print_i(struct Node *x){
        if(x == NIL)return;
        print_i(x->left);
        printf(" %d", x->key);
        print_i(x->right);
}

void print_p(struct Node *x){
        if(x == NIL)return;
        printf(" %d", x->key);
        print_p(x->left);
        print_p(x->right);
}

