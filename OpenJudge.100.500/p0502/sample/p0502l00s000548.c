#include <stdio.h>
int a,i,t;
int main() {
 scanf("%d",&a); 
 int s[a];
 for(i=0;i<a;i++)
  {
   scanf("%d",&s[i]);
  }
 for(i=0;i<a;i++) 
  {
   if(s[i]%2==0)
   {
     if(s[i]%3==0)
      {
        s[i]=0;
      }
     else
     {
       if(s[i]%5==0)
       {
         s[i]=0;
       }  
       else
       {
         s[i]=1;
       }
     }
   }
   else
   {
     s[i]=0;
   }
  }
  for(i=0;i<a;i++) 
  {
    if(s[i]>t)
    {
     t=s[i];
    }
  }
  if(t==0)
  {
   printf("APPROVED");
  }
  if(t!=0)
  {
   printf("DENIED");
  }
  return 0;
}