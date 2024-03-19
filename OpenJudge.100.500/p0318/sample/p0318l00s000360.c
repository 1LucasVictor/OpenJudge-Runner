#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
  struct Node *parent;
  struct Node *left;
  struct Node *right;
  int key;
} node;
void preOrder(node *);
void inOrder(node *);
void insert(int);
node *find(int);
void delete(int);
node *getSuccessorKey(node *);
node *root;
int n;
int main() {
  int i, j, key;
  char command[7];
 
  scanf("%d", &n);
  for (i = 0; i < n; i++) {    
    scanf("%s", command);
    switch (command[0]) {
    case 'i':
      scanf("%d", &key);
      insert(key);
      break;
    case 'f':
      scanf("%d", &key);
      node *tmp = find(key);
      if (tmp != NULL) {
	printf("yes\n");
      } else {
	printf("no\n");
      }
      break;
    case 'd' :
      scanf("%d", &key);
      delete(key);
      break;
    default:
      inOrder(root);
      printf("\n");
      preOrder(root);
      printf("\n"); 
      break;
    }
  }
  return 0;
}
void inOrder(node *u) {
  if (u == NULL) {
    return ;
  }
  if (u->left != NULL) inOrder(u->left);
  printf(" %d",u->key);
  if (u->right != NULL) inOrder(u->right);
  return ;
}
void preOrder(node *u) {
  if (u == NULL) {
    return ;
  }
  printf(" %d",u->key);
  if (u->left != NULL) preOrder(u->left);
  if (u->right != NULL) preOrder(u->right);
  return ;
}
void insert(int key) {
  node *y = NULL;
  node *x = root;
  node *z;
 
  z = (node*) malloc(sizeof(node));
  z->left = NULL;
  z->right = NULL;
  z->key = key;
 
  while (x != NULL) {
    y = x;
    if (key < x->key) {
      x = x->left;
    } else {
      x = x->right;
    }
  }
  
  z->parent = y;
  if ( y==NULL ) {
    root = z;
  } else if (z->key < y->key) {
    y->left = z;
  } else {
    y->right = z;
  }
  return ;
}
node *find(int key) {
  node *x = root;
  while (x != NULL && x->key != key) {
    if (x->key < key) x = x->right;
    else  x = x->left;
  }
  return x;
}
node *getSeccessorKey(node *u) {
  node *p;
  if (u->right != NULL) {
    u = u->right;
    while (u->left != NULL) u = u->left;
    return u;
  } else {
    p = u->parent;
    while (p != NULL && u == p->right) {
      u = p;
      p = u->parent;
    }
    return p;
  }
}
void delete(int key) {
  node *z, *y, *x;
  z = find(key);

  if (z->left == NULL || z->right == NULL) {
    y = z;
  } else {
    y = getSeccessorKey(z);
  }

  if (y->left != NULL) x = y->left;
  else x = y->right;
 
  if (x != NULL) {
    x->parent = y->parent;
  }
  if (y->parent == NULL) {
    root = x;
  } else if (y == y->parent->left) {
    y->parent->left = x;
  } else {
    y->parent->right = x;
  }

  if (y != z) {
    z->key = y->key;
  }
  return ;
}