#include<stdio.h>
#define NIL -1

struct Node {int p, l, r;};
struct Node T[10000];
int n;

void Preorder(int x) {
   if (x == NIL) {
      return;
   }
   printf(" %d", x);
   Preorder(T[x].l);
   Preorder(T[x].r);
}

void Inorder(int x) {
   if (x == NIL) {
      return;
   }
   Inorder(T[x].l);
   printf(" %d", x);
   Inorder(T[x].r);
}

void Postorder(int x) {
   if (x == NIL) {
      return;
   }
   Postorder(T[x].l);
   Postorder(T[x].r);
   printf(" %d", x);
}

int main() {
   int i, l, r, n, j, k;

   scanf("%d", &n);
   for (j = 0; j < n; j++) {
      T[j].p = NIL;
   }
   for (j = 0; j < n; j++) {
      scanf("%d %d %d", &i, &l, &r);
      T[i].l = l;
      T[i].r = r;
      if (l != NIL) {
         T[l].p = i;
      }
      if (r != NIL) {
         T[r].p = i;
      }
   }

   for (j = 0; j < n; j++) {
      if (T[j].p == NIL) {
         k = j;
      }
   }

   printf("Preorder\n");
   Preorder(k);
   printf("\nInorder\n");
   Inorder(k);
   printf("\nPostorder\n");
   Postorder(k);
   printf("\n");

   return 0;
}
