#include <stdio.h>
int main()
{
 int a,b,c,i,g=0;
 scanf("%d%d%d",&a,&b,&c);
 for(i=a;i<=b;i++)
 {
  if(c%i==0)
    g++;
 }
 printf("%d\n",g);
}
