#include <stdio.h>
#define N 200000
#define NIL -1
typedef struct Node {
  int parent;
  int left;
  int right;
} node;

node tree[N];

void preOrder(int u) {
  if (u == NIL) {
    return; 
  }
  printf(" %d", u);
  preOrder(tree[u].left);
  preOrder(tree[u].right);
}
void inOrder(int u) {
  if (u == NIL) {
    return;
  }
  inOrder(tree[u].left);
  printf(" %d", u);
  inOrder(tree[u].right);
  return;
}
void postOrder(int u) {
  if (u == NIL) {
    return;
  }
  postOrder(tree[u].left);
  postOrder(tree[u].right);
  printf(" %d", u);
  return;
}
int main() {
  int n, i, j, left, right, node, rooti;
  for (i = 0; i < N; i++) {
    tree[i].parent = NIL;
    tree[i].left = NIL;
    tree[i].right = NIL;
  }
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d %d %d", &node, &left, &right);
    tree[node].left = left;
    tree[node].right = right;
    if (left != NIL) {
      tree[left].parent = node;
    }
    if (right != NIL) {
      tree[right].parent = node;
    }
  }
  for (i = 0; i < n; i++) {
    if( tree[i].parent ==  NIL ) {
      rooti = i;
    }
  }
  printf("Preorder\n");
  preOrder(rooti);
  printf("\nInorder\n");
  inOrder(rooti);
  printf("\nPostorder\n");
  postOrder(rooti);
  printf("\n");
  return 0;
}