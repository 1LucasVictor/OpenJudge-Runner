#include<stdio.h>
#define MAX 10000
#define NIL -1

struct N{
   int p, l, r;
};

struct N T[MAX];

int n;

void preParse(int u){
   if (u==NIL)
      return;
   printf(" %d", u);
   preParse(T[u].l);
   preParse(T[u].r);
}

void inParse(int u)
{
   if (u==NIL)
   {
      return;
   }
   inParse(T[u].l);
   printf(" %d", u);
   inParse(T[u].r);
}

void postParse(int u)
{
   if (u==NIL){
      return;
   }
   postParse(T[u].l);
   postParse(T[u].r);
   printf(" %d", u);
}

int main()
{
   int i, id, l, r, root;

   scanf("%d", &n);
   for (i=0; i<n; i++)
   {
      T[i].p = NIL;
   }

   for (i=0; i<n; i++)
   {
      scanf("%d %d %d", &id, &l, &r);
      T[id].l = l;
      T[id].r = r;
      if (l!=NIL)
         T[l].p = id;
      if (r!=NIL)
         T[r].p = id;
   }

   for (i=0; i<n; i++)
   {
      if (T[i].p==NIL)
      {
         root = i;
      }
   }

   puts("Preorder");
   preParse(root);
   printf("\n");
   puts("Inorder");
   inParse(root);
   printf("\n");
   puts("Postorder");
   postParse(root);
   printf("\n");

   return 0;
}

