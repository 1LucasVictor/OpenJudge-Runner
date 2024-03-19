#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,m,j=1;
   scanf("%d",&n);
   while(n--)
   {
       scanf("%d",&m);
       if(m%2==0&&m>=10)
       {
           if(!(m%6==0||m%10==0))
            j=0;
       }
       else if(m==2||m==4||m==8)
        j=0;
   }
   if(j==1)
    printf("APPROVED\n");
   else
    printf("DENIED\n");
    return 0;
}
