/*************/
/* Tree Walk */
/*************/
#include <stdio.h>
#define MAX 25
#define NIL -1

/* Struct Declaration */
typedef struct node {
  int parent;
  int left;
  int right;
}Node;

/* Prototype Declaration */
void printPreorder(int);
void printInorder(int);
void printPostorder(int);

/* Global Variables */
Node U[MAX];
int n;

int main() {
  int id, data, r;
  int i, j;

  scanf("%d", &n);

  for ( i = 0; i < n; i++ ) {
    U[i].parent = NIL;
    U[i].left = NIL;
    U[i].right = NIL;
  }

  for ( i = 0; i < n; i++ ) {
    scanf("%d", &id);
    for ( j = 0; j < 2; j++) {
      scanf("%d", &data);
      if ( j == 0 ) U[id].left = data;
      else U[id].right = data;
      U[data].parent = id;
    }
  }

    for ( i = 0; i < n; i++ )
      if ( U[i].parent == NIL )
        r = i;

    printf("Preorder\n");
    printPreorder(r);
    printf("\n");
    printf("Inorder\n");
    printInorder(r);
    printf("\n");
    printf("Postorder\n");
    printPostorder(r);
    printf("\n");

  return 0;
}

/* Preorder Walk */
void printPreorder(int u) {
  if ( u == NIL ) return;

  printf(" %d", u);
  printPreorder(U[u].left);
  printPreorder(U[u].right);
}

/* Inorder Walk */
void printInorder(int u) {
  if ( u == NIL ) return;

  printInorder(U[u].left);
  printf(" %d", u);
  printInorder(U[u].right);
}

/* Postorder Walk */
void printPostorder(int u) {
  if ( u == NIL ) return;

  printPostorder(U[u].left);
  printPostorder(U[u].right);
  printf(" %d", u);
}