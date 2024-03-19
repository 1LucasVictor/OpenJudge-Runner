#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
 int key;
 struct node *left, *right, *parent;
}node;

node *root, *NIL;


void insert(int k) {
 node* y = NIL, * x = root, * z;
 z = (node*)malloc(sizeof(node));
 z->key = k; z->left = NIL; z->right = NIL;

 while (x != NIL) {
  y = x;
  if (k < x->key) {
   x = x->left;
  }
  else {
   x = x->right;
  }
 }
 z->parent = y;

 if (y == NIL) root = z;
 else {
  if (k < y->key) {
   y->left = z;
  }
  else {
   y->right = z;
  }
 }
}

void search(int key) {
  node* copy = root;

 while (copy!= NIL) {
  if (copy->key == key)
{   printf("yes");
   return;
  }
  
    if (key < copy->key) copy = copy->left;
  else copy= copy->right;
  
 }
   printf("no");
 

}

void inOrder(node* input_node) {
 if (input_node == NIL)return;
 inOrder(input_node->left);
 printf(" %d", input_node->key); //from note put space before number
 inOrder(input_node->right);
}
void preOrder(node* input_node) {
 if (input_node == NIL)return;
 printf(" %d", input_node->key);
 preOrder(input_node->left);
 preOrder(input_node->right);
}

int main() {
 int i;
 int n;
 int A[500000];
 scanf("%d", &n);
 char function[258];
 char str1[]="insert";
  char str2[]="print";
  char str3[]="find";
 

 for (i = 0; i<n; i++)
  {
      scanf("%s", function);
    if (strcmp(function, str1) == 0)
     {
        scanf("%d", &A[i]);
        insert(A[i]);
  }
  if (strcmp(str3, function) == 0)
   {
       scanf("%d", &A[i]);
       search(A[i]);
       printf("\n");
  }
  if (strcmp(str2, function) == 0) 
  {
      inOrder(root);
      printf("\n");
      preOrder(root);
      printf("\n");
  }
 }

 return 0;
}

