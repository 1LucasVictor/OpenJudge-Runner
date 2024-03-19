#include<stdio.h>
int main()
{
      int p,h, j, i, k=0;
      scanf("%d%d",&h,&p);
      int ara[p];
      for(j=0;j<p;j++)
      {
          scanf("%d",&ara[j]);
          k=k+ara[j];
      }


         if(k>=h)
         {
               printf("Yes\n");
         }

         else if(k<h)
         {
             printf("No\n");

         }

      return 0;

      }

