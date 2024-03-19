#include<stdio.h>

#define a 100
int main(void)
{
 int D,N;
 int i,s,h;

 scanf("%d%d", &D,&N);


   if(D==0) s=N;

   else if(D==1) s=N*a;

   else {
         for(i=1;i<D;i++)
          h=a*a;
          s=h*N;
        }

 printf("%d\n", s);
}