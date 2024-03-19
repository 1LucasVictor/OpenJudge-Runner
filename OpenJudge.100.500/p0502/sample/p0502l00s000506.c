#include <stdio.h>

int main()
{
  
  int n;
  scanf("%d",&n);
  int a[n];
  int i;
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  
  int flag=0;
  
  for(i=0;i<n;i++)
  {
   if(a[i]%2==0)
   {
     if( ( a[i]%3 == 0) || (a[i]%5==0) )
     {
      
       
     }
     else 
     {
       flag=1;
       printf("DENIED");
       break;
     }
     
   }
    
  }
  
  if(flag==0)
  {
    printf("APPROVED");
  }

  
 return 0;
  
}