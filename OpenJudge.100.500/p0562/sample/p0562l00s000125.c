#include<stdio.h>
int main()
{
    int a,b,c,d,e,i;
    scanf("%d%d",&a,&b);
   for(i=1;i<=20;i++)
   {
       if(((a*i)-(i-1))>=b)
           {
                printf("%d\n",i);
            break;
           }
   }
    return 0;
}
