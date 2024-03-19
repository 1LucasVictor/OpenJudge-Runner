#include<stdio.h>
int main()
{
      int a,x,y,z;
      scanf("%d", &a);
      if(a>=1 && a<=10)
     {

       x=a*a;
       y=a*a*a;
       z=a+x+y;
     
             printf("%d",z);
   

     }  
      return 0;
}