#include<stdio.h>
void main()
{
   int N,D,i=0;
   scanf("%d%d",&N,&D);
   while(N--)
   {
       int x,y;
       scanf("%d%d",&x,&y);
       
       if(((x*x)+(y*y))<=(D*D))
       i++;
   }
   
   printf("%d",i);
    
}