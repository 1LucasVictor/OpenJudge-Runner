#include <stdio.h>

struct Node {
  int p;
  int l;
  int r;
};

struct Node t[50];
int n;

void preParse(int u){
  if (u == -1) {
    return;
  }
  printf(" %d", u);
  preParse(t[u].l);
  preParse(t[u].r);
}

void inParse(int u){
  if (u == -1) {
    return;
  }
  inParse(t[u].l);
  printf(" %d", u);
  inParse(t[u].r);
}

void postParse(int u){
  if (u == -1) {
    return;
  }
  postParse(t[u].l);
  postParse(t[u].r);
  printf(" %d", u);
}

int main(void){
  int v, l, r, root, i;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    t[i].p = -1;
  }

  for (i = 0; i < n; i++) {
    scanf("%d %d %d", &v, &l, &r);
    t[v].l = l;
    t[v].r = r;
    if (l != -1) {
      t[l].p = v;
    }
    if (r != -1) {
      t[r].p = v;
    }
  }

  for (i = 0; i < n; i++) {
    if (t[i].p == -1) {
      root = i;
    }
  }

  printf("Preorder\n");
  preParse(root);
  printf("\n");

  printf("Inorder\n");
  inParse(root);
  printf("\n");

  printf("Postorder\n");
  postParse(root);
  printf("\n");

  return 0;
}

