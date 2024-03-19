#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


int main () 
{

 int N , M;
 scanf("%d %d",&N,&M);

 int S[M];
 int C[M];
 int res[M];

memset(res,0,sizeof(res[0]) * M);

 for (int i = 0;i<M;i++)
 {
   scanf("%d %d",&S[i],&C[i]);
 }

  for (int i = 0;i<M;i++)
  {
     res[ S[i]-1 ] = C[i];
  }

 for (int i = 0;i<M;i++)
  {
    if (res[ S[i] -1  ] > C[i] )res[ S[i] - 1]=C[i];
  }

 if (res[0]==0)
  {
   printf("-1");
   return 0 ;
  }


  for (int i = 0;i<N;i++)
  { 
    printf("%d",res[i]);
 
  }
  
 return 0;
}