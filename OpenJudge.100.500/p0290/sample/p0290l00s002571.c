#include <stdio.h>
#include <math.h>


int main()
{
   int n,x,i,j,count=0,a;

   scanf("%d",&n);


   for(i=0;i<n;i++)
  {
    scanf("%d",&x);
    if(x==2) count++;
    if(x<2 || (x%2)==0) continue;

    for(j=3;j<=sqrt(x);j=j+2)
    {
        if((x%j)==0) 
        {
            a=1;
            continue;
        }
            
    }
   if(a==1) 
   {
       a=0;
       continue;
   }
    count++;
    
  }

  printf("%d\n",count);

    return 0;
}


