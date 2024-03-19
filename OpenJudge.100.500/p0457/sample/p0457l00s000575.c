#include<stdio.h>

int main()
{  
   long long int n,m,k,i,j,max,ans=0,count=0,a[200001],b[200001];

  scanf("%lld %lld %lld",&n,&m,&k);

  for(i=0;i<n;i++)
  {
     scanf("%lld",&a[i]);
  }
   
  for(i=0;i<m;i++)
  {
     scanf("%lld",&b[i]);

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

   printf("%lld",count);

    return 0;

}