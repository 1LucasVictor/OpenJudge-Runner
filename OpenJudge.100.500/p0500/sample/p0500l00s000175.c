#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


int main () 
{

 int N , M;
 scanf("%d %d",&N,&M);


 if (M==0 && N==3)
 {
 printf("100");
 return 0;
 }
 else if ((M==0||M==1) && N==1)
 {
 printf("0");
 return 0;
 }
 else if (M>1 &&  N==1)
 {
 printf("-1");
 return 0;
 }
 else if (M==0 && N==2)
 {
 printf("10");
 return 0;
 }
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

if (N==2 & res[0]==0 && res[1]==0)
 {
   printf("10");
   return 0;
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