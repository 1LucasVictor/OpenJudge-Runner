#include<stdio.h>

int main()
{
    int a,b,c,d,bi,end;
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a<=c)
     bi=c;
     else bi=a;
    if(b<=d)
     end=b;
     else end=d;
     if((end-bi)<=0)
     printf("%d",0);
     else
      printf("%d",end-bi);


     return 0;
}
