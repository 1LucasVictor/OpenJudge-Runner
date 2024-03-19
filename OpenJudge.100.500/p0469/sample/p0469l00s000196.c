#include<stdio.h>
int main()
{
   int n,a,b,r,i=1;
   scanf("%d",&n);
   scanf("%d %d",&a,&b);

   for(i=1; i<=b; i++)
   {
       r=n*i;
       if(r>b)
       {
           r = r-n;
           break;
       }
   }
   if(r>=a && r<=b)
    printf("OK");
   else
    printf("NG");
    return 0;
}
