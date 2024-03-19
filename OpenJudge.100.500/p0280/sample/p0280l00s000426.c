#include<stdio.h>
#define   MAX 100
#define   BLACK 2
#define   GRAY 1
#define   WHITE 0
#define   INFTY 5000000

int n, Mi[MAX][MAX];

int function()
{
   int k, MinMinu;
   int di[MAX], pi[MAX], color[MAX];
   int i, u, sum = 0;

   for (i=0; i<n; i++){
      di[i] = INFTY;
      pi[i] = -1;
      color[i] = WHITE;
   }

   di[0] = 0;

   while (1){
      MinMinu = INFTY;
      k = -1;
      for (i=0; i<n; i++){
         if (MinMinu>di[i] && color[i]!=BLACK){
            k = i;
            MinMinu = di[i];
         }
      }
      if (k==-1)
         break;
      color[k] = BLACK;
      for (u=0; u<n; u++){
         if (color[u]!=BLACK && Mi[k][u]!=INFTY){
            if (di[u]>Mi[k][u]){
               di[u] = Mi[k][u];
               pi[u] = k;
               color[u] = GRAY;
            }
         }
      }
   }

   for (i=0; i<n; i++){
      if (pi[i]!=-1)
         sum += Mi[i][pi[i]];
   }
   return sum;
}

/*
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("%d",M[i][j]);
if(j != n)
{
printf(" ");
}
}
printf("\n");
}
*/

int main()
{
   int i, j, k;

   scanf("%d", &n);

   for (i=0; i<n; i++){
      for (j=0; j<n; j++){
         scanf("%d", &k);
         Mi[i][j] = (k==-1) ? INFTY : k;
      }
   }

   printf("%d\n", function());

   return 0;
}

