
#include <stdio.h>

int main()
{
   long int a,b,c,x,y,flag=0,i,j,count,sum,min=10000;
   
   scanf("%ld%ld%ld",&a,&b,&x);
   if(x>a && a+b>x )
   {
       printf("YES");
   }else{
       printf("NO");
   }
   
     return 0;
}
