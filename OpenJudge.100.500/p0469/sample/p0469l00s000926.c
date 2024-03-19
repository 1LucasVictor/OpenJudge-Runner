#include<stdio.h>
int main()
{
     int k,a,b,sum=0;
     scanf("%d",&k);
     scanf("%d%d",&a,&b);
     for(a=a;a<=b;a++)
     {
          if((a%k)==0)
          {
               sum++;
          }
     }
     if(sum==0)
     {
          printf("NG\n");
     }
     else
     {
           printf("OK\n");
     }
}
