#include <stdio.h>
#include <math.h>
int main()
{
   int x,y,i, m,n ;
   scanf("%d", &x);
   scanf("%d", &y);

   for(i=0; i<= x || i<=y; i++ )
   {
       m= fabs(x-i);
       n= fabs(y-i);
       if(m==n)
        break;
   }
   if(m==n)
    printf("%d", i);
   else
    printf("IMPOSSIBLE");
    
    return 0;
}
