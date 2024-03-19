#include<stdio.h>
int main()
{
    int a,b,c,k,s=0;
  scanf("%d%d%d%d",&a,&b,&c,&k);

     if(a<=k)
     {
         s+=a;
         k-=a;
     }
     else
        {
            s+=(a-k);
            k=0;
        }
     if(b<=k)
     {
         k-=b;
     }
     else if(b>k&&k!=0)
        {
            k=-1;
        }
     if(c<=k)
     {
         s-=k;
         k=-1;
     }
     else if(c>k&&k!=0)
        {
            s-=k;
            k=-1;
        }
     printf("%d",s);
     return 0;
     }
