#include<stdio.h>

int main()
{  
   int n,m,k,i,j,max,ans=0,count=0,a[200001],b[200001];

  scanf("%d %d %d",&n,&m,&k);

  for(i=0;i<n;i++)
  {
     scanf("%d",&a[i]);
  }
   
  for(i=0;i<m;i++)
  {
     scanf("%d",&b[i]);

   }

   if(n>m)
   {
      max=n;
   }

   else
   max=m;
   
   for(i=0;i<max;i++)
   {
     if(a[i]!=NULL)
    {
      ans=ans+a[i];
    
      if(ans<=k)
      {
        count++;
    
     }
      
    }
    
    if(b[i]!=NULL)
   {
     ans=ans+b[i];
    
     if(ans<=k)
      {
        count++;
    
     }
    
    }

   }

   printf("%d",count);

    return 0;

}