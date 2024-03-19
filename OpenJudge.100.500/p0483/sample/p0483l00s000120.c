#include<stdio.h>
int main ()
{  int n;
   scanf("%d",&n);
   int h;
   do
   {   h=n%10;
       if(h==7)
        { printf("Yes");return 0;}
        n=n/10;
   }while(n!=0);
   printf("No");
   return 0;
}