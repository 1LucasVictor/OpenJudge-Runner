#include <stdio.h>
#include <string.h>

typedef struct {
  int par, lch, rch;
} node;

#define MAX_N 25

int n;
node T[MAX_N];

void preOrder(int u) {
  printf(" %d", u);
  if(T[u].lch != -1) preOrder(T[u].lch);
  if(T[u].rch != -1) preOrder(T[u].rch);
}

void inOrder(int u) {
  if(T[u].lch != -1) inOrder(T[u].lch);
  printf(" %d", u);
  if(T[u].rch != -1) inOrder(T[u].rch);
}

void postOrder(int u) {
  if(T[u].lch != -1) postOrder(T[u].lch);
  if(T[u].rch != -1) postOrder(T[u].rch);
  printf(" %d", u);
}

int main() {
  int root = -1;
  int i;

  for(i = 0; i < MAX_N; i++) {
    T[i] = (node){-1, -1, -1};
  }

  scanf("%d", &n);
  for(i = 0; i < n; i++) {
    int id, lch, rch;
    scanf("%d %d %d", &id, &lch, &rch);
    T[id].lch = lch;
    T[id].rch = rch;
    if(lch != -1) T[lch].par = id;
    if(rch != -1) T[rch].par = id;
  }

  for(i = 0; i < n; i++) {
    if(T[i].par == -1) root = i;
  }

  puts("Preorder");
  preOrder(root);
  puts("");
  puts("Inorder");
  inOrder(root);
  puts("");
  puts("Postorder");
  postOrder(root);
  puts("");

  return 0;
}