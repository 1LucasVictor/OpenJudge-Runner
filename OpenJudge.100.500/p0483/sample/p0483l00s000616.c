#include<stdio.h>
void main()
{
 int i,n;
 scanf("%d",&n);
 for(i=0;i<3;i++)
 {
     if(n%10==7)
     {
         printf("Yes");
         break;
     }
     else
{if(n==0)
printf("No");
else
        n/10;
}
 }
}
