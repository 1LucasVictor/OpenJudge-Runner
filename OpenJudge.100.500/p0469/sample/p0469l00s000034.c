#include<stdio.h>
int main ()
{   int K,a,b;
   scanf("%d",&K);
   scanf("%d %d",&a,&b);
   for(int i=a;i<=b;i++)
     if(i%K==0) {printf("OK");return 0;}
   printf("NG");
   return 0;
}