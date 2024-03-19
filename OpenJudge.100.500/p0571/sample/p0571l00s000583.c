#include<stdio.h>

int main ()
{
   int n,a,b,tr;
   scanf("%d %d %d",&n,&a,&b);
   tr=n*a;

   if(tr<b){
    printf("%d",tr);
   }
   if(tr>b){
    printf("%d",b);
   }
   if(tr==b)
   {
       printf("%d",tr);
   }


    return 0;
}