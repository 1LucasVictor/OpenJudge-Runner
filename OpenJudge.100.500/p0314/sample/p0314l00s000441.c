#include <stdio.h>

struct node {
  int c, l, r;
};

struct node t[10000];

void pre(int r) {
  if (r == -1)  return;
  printf(" %d", r);
  pre(t[r].l);
  pre(t[r].r);
}

void in(int r) {
  if (r == -1)  return;
  in(t[r].l);
  printf(" %d", r);
  in(t[r].r);
}

void post(int r) {
  if (r == -1)  return;
  post(t[r].l);
  post(t[r].r);
  printf(" %d", r);
}

int main() {
  int n, c, r, l, i, root;
  scanf("%d", &n);
  for (i = 0; i < n; i++) t[i].c = -1;
  for (i = 0; i < n; i++) {
    scanf("%d %d %d", &c, &l, &r);
    t[c].l = l;
    t[c].r = r;
    if (l != -1) t[l].c = c;
    if (r != -1) t[r].c = c;
   }

   for (i = 0; i < n; i++) {
     if (t[i].c == -1)  root = i;
   }

   printf("Preorder\n");
   pre(root);
   putchar('\n');
   printf("Inorder\n");
   in(root);
   putchar('\n');
   printf("Postorder\n");
   post(root);
   putchar('\n');

   return 0;
}

