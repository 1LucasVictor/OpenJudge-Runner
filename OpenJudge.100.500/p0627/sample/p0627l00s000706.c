#include<stdio.h>
int main()
{
    int a,b,c,sum,sub,mul;
    scanf("%d %d" ,&a,&b);
     sum = a+b;
     sub = a-b;
     mul = a*b;
     if(sum>sub && sum>mul)
     {
         printf("%d\n",sum);
     }
     else if(sub>sum && sub>mul)
     {
         printf("%d\n",sub);
     }
     else if(mul>sum && mul>sub)
     {
         printf("%d\n",mul);
     }
     else
     printf("%d\n",sum);
}
