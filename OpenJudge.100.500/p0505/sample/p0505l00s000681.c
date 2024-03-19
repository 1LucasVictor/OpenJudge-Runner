#include<stdio.h>
int main()
{
   int i,H,N,A[1000];

   scanf("%d %d",&H,&N);

   for(i=0; i<1; i++)
   {
       scanf("%d",&A[i]);
       H=H-A[i];

   }
   for(i=1; i<N; i++)
   {
       scanf("%d",&A[i]);
       if(A[i]==A[i-1])
       break;
       else
       H=H-A[i];
   }
   if(H<=0)
   printf("Yes");
   else
   printf("No");


}