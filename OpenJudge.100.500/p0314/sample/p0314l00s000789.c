#include <stdio.h>

struct A { int a, b, c; };
struct A T[10000];
int n;

void preParse(int u)
{
   if ( u == -1 ) {
      return;
   }
   printf(" %d", u);
   preParse( T[ u ].b );
   preParse( T[ u ].c );
}

void inParse(int u)
{
   if ( u == -1 ) {
      return;
   }
   inParse( T[ u ].b );
   printf(" %d", u);
   inParse( T[ u ].c );
}

void postParse(int u)
{
   if ( u == -1 ) {
      return;
   }
   postParse( T[ u ].b );
   postParse( T[ u ].c );
   printf(" %d", u);
}

int main()
{
   int i, k, b, c, root;

   scanf("%d", &n);
   for ( i = 0; i < n; i++ ) {
      T[ i ].a = -1;
   }

   for ( i = 0; i < n; i++ ) {
      scanf("%d %d %d", &k, &b, &c);
      T[ k ].b = b;
      T[ k ].c = c;
      if ( b != -1 ) {
         T[ b ].a = k;
      }
      if ( c != -1 ) {
         T[ c ].a = k;
      }
   }

   for ( i = 0; i < n; i++ ) {
      if ( T[ i ].a == -1 ) {
         root =i;
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