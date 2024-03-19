#include<stdio.h>
int main()
{
   int pair[100][2];
   int i   = -1;
   int n   =  0;
   int ans =  0;
   int j, k, l;
   
   do {
      ++i;
      scanf("%d %d", &pair[i][0], &pair[i][1]);
   } while (pair[i][0] != 0 && pair[i][1] != 0);
   n = i;
   
   for (i = 0; i < n; ++i){
      ans = 0;
      for (j = 1; j <= pair[i][0]; ++j){
         for (k = 1; k < j; ++k){
            for (l = 1; l < k; ++l){
               if (j > k && k > l ){
                  if ((j + k + l) == pair[i][1])
                     ++ans;
               }
            }
         }
      }
      printf("%d ", ans);
      
   }
   return 0;
}