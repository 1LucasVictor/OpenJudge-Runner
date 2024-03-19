#include<stdio.h>

int main()

{
   int a[1000];

   int v,i;

    scanf("%d",&v);

    for(i=1;i<=v;i++)
    {
        scanf("%d",&a[i]);
    }

   for(i=v;i>=1;i--)
   {
       printf("%d",a[i]);

       if(i!=1)
       {
           printf(" ");
       }

   }

printf("\n");






    return 0;



}

