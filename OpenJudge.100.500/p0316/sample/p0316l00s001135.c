// Bibary search tree
#include <stdio.h>
#include <string.h>
#define N 10000
 
 typedef struct node {
   int key;
   struct node* parent;
   struct node* left;
   struct node* right;
 } NODE;

void insert(NODE*, NODE*);
void printInorder(NODE*);
void printPreorder(NODE*);

 int main() {
   int i, j;
   char order[10];
   int m, key;
   NODE node[N];
   NODE *z;

   // input
   scanf("%d", &m);
   
   for(i = 0; i < m; i++) {
     scanf("%s", order);
     if(strcmp(order, "insert") == 0) {
       scanf("%d", &key);
       if(i == 0) {
	 node[i].key = key;
	 node[i].left = NULL;
	 node[i].right = NULL;
       }
       else {
	 node[i].key = key;
	 node[i].left = NULL;
	 node[i].right = NULL;
	 insert(node, &node[i]);
       }
     }
     else if (strcmp(order, "print") == 0) {
       printInorder(&node[0]);
       printf("\n");
       printPreorder(&node[0]);
       printf("\n");
     }
     else printf("error\n");
   }

   return 0;
 }

void insert(NODE* tree, NODE* node) {
  int i = 0;
  NODE *x;
  NODE *y;

  y = NULL;
  x = &tree[0];
  while(x != NULL) {
    y = x;
    if(node->key < x->key) x = x->left;
    else x = x->right;
  }
  if(node->key < y->key){
    y->left = node;
  }
  else{
    y->right = node;
  }
}
 
void printInorder(NODE* node) {
  if(node != NULL) {
    printInorder(node->left);
    printf(" %d", node->key);
    printInorder(node->right);
  }
}

void printPreorder(NODE* node) {
  if(node != NULL) {
    printf(" %d", node->key);
    printPreorder(node->left);
    printPreorder(node->right);
  }
}

