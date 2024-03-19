#include<stdio.h>
int main()
{
   int K,A,B,d=0;
   scanf("%d %d %d",&K,&A,&B);
   for(A;A<=B;A++)
   {
       if(A%K==0)
       d++;
   }
   if(d>0)
    printf("OK\n");
   else
    printf("NG\n");
}
