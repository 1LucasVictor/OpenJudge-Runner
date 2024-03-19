/**
  * BInary Search tree (insert & search)
  * output 1)node_number, 2)parent_number, 3)depth, 4)kind_of_node, 5)child_list
  */

/* inclution */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Definition */
#define MAX 500000
#define LEN 10

/* Global Variables */
struct Node {
  int key;
  struct Node *right, *left, *parent;
};

/* Prototype */
void insert(int);
struct Node* find(struct Node*, int);
void inOrderWalk(struct Node*);
void preOrderWalk(struct Node*);

struct Node *root, *NIL;

int n;

/* main */
int main(){
  int i,x; //n: length of input, z: insert node key
  char str[LEN]; //insert???????´?
  
  /* input the number of A[] */
  scanf("%d",&n);
  
  /* input datas */
  for(i=0;i<n;i++){
    scanf("%s", str);
    if(!strcmp(str, "find")) {
      scanf("%d", &x);
      struct Node *result = find(root, x);
      if(result!=NIL) {
        printf("yes\n");
      }else {
        printf("no\n");
      }
    }else if(!strcmp(str, "insert")) {
      scanf("%d", &x);
      insert(x);
    }else if(!strcmp(str, "print")) {
      inOrderWalk(root);
      printf("\n");
      preOrderWalk(root);
      printf("\n");
    }
  }

  return 0;
}

/* insertion */
void insert(int k) {
  struct Node *y = NIL; //x ??? ???
  struct Node *x = root;
  struct Node *z;

  z = (struct Node *)malloc(sizeof(struct Node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL) {
    y = x; // ???????¨????
    if (z->key < x->key) {
      x = x->left; // ?????????????§????
    }else {
      x = x->right; // ?????????????§????
    }
  }
  z->parent = y;

  if (y == NIL) { // T ???????????´???
    root = z;
  }else if (z->key < y->key) {
    y->left = z; // z ??? y ?????????????????????
  }else {
    y->right = z; // z ??? y ?????????????????????
  }
}

struct Node *find(struct Node *v, int k) {
  while(v!=NIL && k!=v->key) {
    if(k<v->key) {
      v = v->left;
    }else {
      v = v->right;
    }
  }
  return v;
}

void inOrderWalk(struct Node *v) {
  if(v==NIL) {
    return;
  }
  inOrderWalk(v->left);
  printf(" %d", v->key);
  inOrderWalk(v->right);
}

void preOrderWalk(struct Node *v) {
  if(v==NIL) {
    return;
  }
  printf(" %d", v->key);
  preOrderWalk(v->left);
  preOrderWalk(v->right);
}