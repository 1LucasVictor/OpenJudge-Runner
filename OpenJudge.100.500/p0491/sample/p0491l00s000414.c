#include<stdio.h>
int main()
{
    int n,k,a,b;
   scanf("%d %d",&n,&k);
    if(n%k==0)
    {
       printf("0");
    }
    else
    {    a=n%k;
         b=abs(k-a);
         if(a<b)
           printf("%d",a);
         else
            printf("%d",b);
    }
    return 0;
}