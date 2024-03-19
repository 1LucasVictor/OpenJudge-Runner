#include<stdio.h>
int main()
{
    int a,b,c,k,s=0;
  scanf("%d%d%d%d",&a,&b,&c,&k);

     if(k<=a)
       printf("%d",a-k);
  else if(k<=a+b)
    printf("%d",a);
  else
    printf("%d",-1*(k-a-b));
     
     return 0;
     }
