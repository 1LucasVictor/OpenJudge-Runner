#include <stdio.h>
#include <stdlib.h>
int A[100000001]={0};
int main()
{
   int N;
   scanf("%d",&N);
   int i;
   int val;
   int flag=0;
   for(i=0;i<N;i++)
   {
       scanf("%d",&val);
      if(A[val]==0)
      {
          A[val]=1;
      }
      else
      {
          flag=1;
      }
   }
   if(flag==0)
   {
       printf("YES");
   }
   else
   {
       printf("NO");
   }

    return 0;
}
