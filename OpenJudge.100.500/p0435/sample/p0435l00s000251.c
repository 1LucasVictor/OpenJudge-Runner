#include<stdio.h>
void main()
{
   long N,D,i=0;
   scanf("%ld%ld",&N,&D);
   while(N--)
   {
       long x,y;
       scanf("%ld%ld",&x,&y);
       
       if(((x*x)+(y*y))<=(D*D))
       i++;
   }
   
   printf("%ld\n",i);
    
}