#include<stdio.h>

int main(void)
{
 int d,n;
 int i,s,h=100;

 scanf("%d%d", &d,&n);


   if(d==0) s=n;

 else if(d==1) s=n*h;

 else if(d==2){ h=h*h;
                s=n*h;
              }


 printf("%d\n", s);
 return 0;
}
