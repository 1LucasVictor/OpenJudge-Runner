#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
struct Node{
  int key;
  struct Node* p;
  struct Node* l;
  struct Node* r;
};
 
typedef struct Node node;
 
node* insert(node* r, int k) {
  node* x = r;
  node* y = NULL;
  node* z = (node*)malloc( sizeof(node) );
  z->key = k;
  z->l = NULL;
  z->r = NULL;
  z->p = NULL;
 
  while(x != NULL) {
    y = x;
 
    if(z->key < x->key) {
      x = x->l;
    }else {
      x = x->r;
    }
 
  }
  z->p = y;
 
  if(y == NULL) {
    r = z;
  }else if(z->key < y->key) {
    y->l = z;
  }else {
    y->r = z;
  }
 
  return r;
 
}
 
 
void printInorder(node* r) { 
   
  if(r->l != NULL) {
    printInorder(r->l);
  }
 
  printf(" %d", r->key);
 
  if(r->r != NULL) {
    printInorder(r->r);
  }
 
}
 
 
void printPreorder(node* r) {
 
  printf(" %d", r->key);
 
  if(r->l != NULL) {
    printPreorder(r->l);
  }
 
  if(r->r != NULL) {
    printPreorder(r->r);
  }
 
}
 
 
int main() {
 
  int m, k;
  node* r = NULL;
  char o[10];
  int i;
 
  scanf("%d", &m);
 
  for(i=0; i<m; i++) {
 
    scanf("%s", o);
 
    if(!strcmp(o, "insert")) { 
      scanf("%d", &k);
   
      r = insert(r, k);
   
    }
 
    if(!strcmp(o, "print")) {
      printInorder(r);
      printf("\n");
 
      printPreorder(r);
      printf("\n");
    }
 
 
  }
 
  return 0;
 
}