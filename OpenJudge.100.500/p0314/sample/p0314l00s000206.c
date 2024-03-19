#include <stdio.h>

struct TREE{
   int ID;
   int L;
   int R;
};


void Preorder(struct TREE nord, struct TREE T[], int n, int memo[]) {
   printf(" %d", nord.ID);
   if (nord.L != -1) {
	  Preorder(T[memo[nord.L]], T, n, memo);
   }
   if (nord.R != -1) {
	  Preorder(T[memo[nord.R]], T, n, memo);
   }
}

void Inorder(struct TREE nord, struct TREE T[], int n,int memo[]) {
   if (nord.L != -1) {
	  Inorder(T[memo[nord.L]], T, n, memo);
   }
   printf(" %d", nord.ID);
   if (nord.R != -1) {
	  Inorder(T[memo[nord.R]], T, n, memo);
   }
}

void Postorder(struct TREE nord, struct TREE T[], int n, int memo[]) {
   if (nord.L != -1) {
	  Postorder(T[memo[nord.L]], T, n, memo);
   }
   if (nord.R != -1) {
	  Postorder(T[memo[nord.R]], T, n, memo);
   }
   printf(" %d", nord.ID);
}

int main() { 
   struct TREE T[30];
   int memo[30];

   int n;
   int i = 0;

   scanf("%d", &n);
   while (i < n) {
	  scanf("%d %d %d", &T[i].ID, &T[i].L, &T[i].R);
	  memo[T[i].ID] = i;
	  i++;
   }
   printf("Preorder\n");
   Preorder(T[0], T, n, memo);
   putchar('\n');
   printf("Inorder\n");
   Inorder(T[0], T, n, memo);
   putchar('\n');
   printf("Postorder\n");
   Postorder(T[0], T, n, memo);
   putchar('\n');

   return 0;
}