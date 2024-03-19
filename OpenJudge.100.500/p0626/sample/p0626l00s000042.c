#include <stdio.h>

int main(void)
{
   int d,n;
   scanf("%d%d",&d,&n);
   if(d==0) printf("%d",n);
   else if(d==1) printf("%d",100*n);
   else if(d==2) printf("%d",10000*n);
   return 0;
}
