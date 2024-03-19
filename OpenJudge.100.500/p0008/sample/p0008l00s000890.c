#include<stdio.h>

int
main()
{
      int n, i, count, count2, j;
      
      while(scanf("%d", &n) != EOF)
      {
         count2 = 0;
         
         for(i=2;i<=n;i++)
         {
            count = 0;
            for(j=1;j<i;j++)
            {
               
               if(i % j == 0)
               {
                  count++;
               }
            }
            if(count == 1)
            {
               count2++;
            }
         }
         printf("%d\n", count2);       
      }

return 0;
}