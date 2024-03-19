#include <stdio.h>
#include<math.h>

int main()
{
    int t,m,i,a[200000],ans,j,z;
   scanf("%d",&t);
   for(i=0;i<t-1;i++)
   {
       scanf("%d",&a[i]);
   }
  m=0;
   for(i=1;i<=t;i++)
   {
       ans=0;
       if(m<=t-1)
       {
         for(j=0;j<t-1;j++)
        {
           if(a[j]==i)
           {
               ans++;
             m+=ans;
           }
        }
        z=i;
       printf("%d\n",ans);
      }
      else
      {
          break;
      }
   }
   for(int v=z+1;v<=t;v++)
   {
       printf("0\n");
   }
}